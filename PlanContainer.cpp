#include "PlanContainer.h"
//#include "Plan.h"
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;

PlanContainer::PlanContainer(){}

PlanContainer::PlanContainer(vector<vector<Plan>> plans){
    planList = plans;
}

//Passes in the name of the input(event Title)
Plan PlanContainer::getPlan(string title, int day){
    //Grabbing user input
    Plan wantedPlan;
    for(int i = 0; i <= planList.size(); i++){
        for(int j = 0; j <= planList[i].size(); j++){
            if(planList[i][j].getTitle() == title && planList[i][j].getDay() == day){
                wantedPlan = planList[i][j];
            }
        }
    }
    return wantedPlan;
}


void PlanContainer::editPlans(string titl, int day){
    int userNum = 0;
    for(int i = 0; i <= planList.size(); i++){
        for(int j = 0; j <= planList[i].size(); j++){
            if(planList[i][j].getTitle() == titl && planList[i][j].getDay() == day){
                cout << "How would you like to change the reminder/event? Day-1, Title-2, Description-3, Exit-0" << endl;
                cin >> userNum;
                switch (userNum) {
                    case 1: {
                        int mont = 0;
                        int da = 0;
                        int yea = 0;
                        cout << "Enter a new date you would like to change to" << endl;
                        cout << "Enter the year" << endl;
                        cin >> yea;
                        while(mont < 1 || mont > 12){
                            cout << "Enter the month" << endl;
                            cin >> mont;
                        }
                        bool isValid = false;
                        while(!isValid){
                            cout << "Enter the day" << endl;
                            cin >> da;
                            if(da <= 31){
                                if(mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont == 8 || mont == 10 || mont == 12){
                                    isValid = true;
                                }
                            } else if(da <= 30){
                                if(mont == 4 || mont == 6 || mont == 9 || mont == 11){
                                    isValid = true;
                                }
                            } else if(da <= 28){
                                if(mont == 2){
                                    isValid = true;
                                }
                            } else if(da <= 29){
                                if(mont == 2){
                                    if(yea % 4 == 0){
                                        isValid = true;
                                    }
                                }
                            }
                        }
                        planList[i][j].setYear(yea);
                        planList[i][j].setMonth(mont);
                        planList[i][j].setDay(da);
                        break;
                    }
                    case 2: {
                        string temp = "";
                        cout << "Enter a new title you would like to change to" << endl;
                        cin >> temp;
                        planList[i][j].setTitle(temp);
                        break;
                    }
                    case 3: {
                        string temp = "";
                        cout << "Enter a new description you would like to change to" << endl;
                        cin >> temp;
                        planList[i][j].setNote(temp);
                        break;
                    }
                    case 0: {
                        break;
                    }
                    default: {
                        cout << "Invalid. Try again." << endl;
                        break;
                    }
                }
            }
        }
    }

}

void PlanContainer::removePlan(const Plan begonThot) {
    vector<vector<Plan>>::iterator it1;
    // vector<vector<Plan>>::iterator it2;
    
    for (it1 = planList.begin(); it1 != planList.end(); it1++) {
        int index = it1 - planList.begin();
        for (auto it2 = planList[index].begin(); it2 != planList[index].end(); it2++) {
            if (*it2 == begonThot) {
                planList[index].erase(it2);
            }
        }
    }
}

void PlanContainer::createPlan(int month, int day, int year, int priority, string ti, string description){
    int userInput = 0;
    type pT = Reminder;    //Check how to do this planType pT
    cout << "Would this be a reminder or an event? Type 1 for reminder, Type 2 for event" << endl;;
    cin >> userInput;
    cin.clear();
    switch(userInput) {
        case 1: pT = Reminder; 
            break;
        case 2: pT = Event; 
            break;
        case 3: 
            break;
        default: cout << "Invalid. Try again." << endl;
            break;
    }
    Plan p1(pT, month, day, year, priority, ti, description); //fix to work with plan.h
    vector<Plan> v1;
    v1.push_back(p1);
    // planList.at(day-1).push_back(p1);
    planList.push_back(v1);
}

void PlanContainer::printAllPlans() {
    for (int i = 0; i < planList.size(); i++) {
        for (int j = 0; j < planList[i].size(); j++) {
            planList[i][j].printPlan();
            cout << endl;
        }
    }
}

void PlanContainer::sortPriority(){
    for (int i = 0; i < planList.size(); i++) {
            selectionSort(planList.at(i));
    }
}

void PlanContainer::selectionSort(vector<Plan> plans){
    int i, j, min_idx; 
    int n = plans.size();
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) {
        if (plans.at(j).getPriority() < plans.at(min_idx).getPriority() ){
            min_idx = j; 
        }
        // Swap the found minimum element with the first element 
        Plan temp = plans.at(min_idx);
        plans.at(min_idx) = plans.at(j);
        plans.at(j) = plans.at(min_idx);
        }
    } 
}
