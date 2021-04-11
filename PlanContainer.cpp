#include "PlanContainer.h"
//#include "Plan.h"
#include <time.h>
#include <vector>
#include <iostream>
using namespace std;

#include <QDebug>

PlanContainer::PlanContainer(vector<vector<Plan>> plans){
    planList = plans;
}

//Passes in the name of the input(event Title)
const Plan PlanContainer::getPlan(string title, int day){
    //Grabbing user input
    Plan wantedPlan;
    for(unsigned int i = 0; i <= planList.size(); i++){
        for(unsigned int j = 0; j <= planList[i].size(); j++){
            if(planList[i][j].getTitle() == title && planList[i][j].getDay() == day){
                wantedPlan = planList[i][j];
            }
        }
    }
    return wantedPlan;
}

unsigned PlanContainer::getSize(){
    return planList.size();
}


void PlanContainer::editPlans(Plan before, Plan after){ //TODO: change when turning this into GUI
    for (unsigned i = 0; i < planList.size(); i++) {
        for (unsigned j = 0; j < planList[i].size();j++) {
            if (planList.at(i).at(j) == before) {
                planList.at(i).at(j).setType(after.getType());
                planList.at(i).at(j).setDay(after.getDay());
                planList.at(i).at(j).setMonth(after.getMonth());
                planList.at(i).at(j).setYear(after.getYear());
                planList.at(i).at(j).setPriority(after.getPriority());
                planList.at(i).at(j).setTitle(after.getTitle());
                planList.at(i).at(j).setNote(after.getNote());
                return;
            }
        }
    }

}

void PlanContainer::removePlan(const Plan begonThot) {
//    vector<vector<Plan>>::iterator it1;
//    vector<Plan>::iterator it2;

//    for (it1 = planList.begin(); it1 != planList.end(); it1++) {
//        int index = it1 - planList.begin();
//        qDebug() << QString::number(index);
//        qDebug() << QString::number(planList.size());
//        for (it2 = planList[index].begin(); it2 != planList[index].end(); it2++) {
//            if (*it2 == begonThot) {
//                it2 = planList[index].erase(it2);
////                if (it2 != planList[index].end()) {
////                    it2++;
////                }
//                return;
//            }
//        }
//    }
    for (unsigned i = 0; i < planList.size(); i++) {
        for (unsigned j = 0; j < planList[i].size();j++) {
            if (planList.at(i).at(j) == begonThot) {
                planList.at(i).erase(planList.at(i).begin()+j);
                --j;
            }
        }
    }
}

void PlanContainer::createPlan(type pT, int month, int day, int year, int priority, string ti, string description){
//    type pT = Reminder;    //Check how to do this planType pT <-- FIXED: pT will be radio buttons with Reminder selected at start
//    cout << "Would this be a reminder or an event? Type 1 for reminder, Type 2 for event" << endl;;
//    cin >> userInput;
//    cin.clear();
//    switch(userInput) {
//        case 1: pT = Reminder;
//            break;
//        case 2: pT = Event;
//            break;
//        case 3:
//            break;
//        default: cout << "Invalid. Try again." << endl;
//            break;
//    }
    Plan p1(pT, month, day, year, priority, ti, description); //fix to work with plan.h <-- FIXED
    // planList.at(day-1).push_back(p1);
//    if (planList.at(day-1)) {

//    }
    planList.at(day-1).push_back(p1);
}

vector<QString> PlanContainer::printAllPlans() {
    vector<QString> temp;
    for (unsigned int i = 0; i < planList.size(); i++) {
        for (unsigned int j = 0; j < planList[i].size(); j++) {
            qDebug() << planList[i].size();
            if (!planList[i].empty() && j < planList[i].size()) {
                temp.push_back(planList[i][j].printPlan());
                qDebug() << "";
            }
        }
    }
    return temp;
}

void PlanContainer::sortPriority(){
    for (unsigned int i = 0; i < planList.size(); i++) {
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
        for (j = i+1; j < n; j++)
        if (plans.at(j).getPriority() < plans.at(min_idx).getPriority() ){
            min_idx = j;
        }
        // Swap the found minimum element with the first element
        Plan temp = plans.at(min_idx);
        plans.at(min_idx) = plans.at(j);
        plans.at(j) = plans.at(min_idx);
    }
}
