#ifndef SCHEDULER_H
#define SCHEDULER_H
#include<iostream>
#include <fstream>
#include "PlanContainer.h"

//this will be overarching class that does general stuff and prints menus
//also will be the one checking validity

class Scheduler : public PlanContainer {
public:
    Scheduler(){ sch.resize(12); }
    bool dateIsEqual(Plan& lhs, Plan& rhs);
    Plan findPlan(const Plan& temp); //if say gui lets you click on a plan
    vector<Plan> findAllPlans(int m, int d, int y);
    vector<PlanContainer*> getScheduler(){
        return sch;
    }
    void addScheduler(int month, int day, int year, int priority, string ti, string note){
        sch.at(month-1)->createPlan(month, day, year, priority, ti, note);
    }
    void readFile(){
        ifstream inputStream;
        string fileName = "Saver.txt";
        inputStream.open("Saver.txt");
        
        string reader = "";
        string reader2 = "";
        int read1, read2, read3, read4;
        PlanContainer pc1;
        //reads in the format
        //int month, int day, int year, int priority, string ti, string note
        
        while(inputStream >> read1){  //month
            inputStream >> read2;     //day
            inputStream >> read3;     //year
            inputStream >> read4;     //priority
            inputStream >> reader;    //ti
            inputStream >> reader2;   //note

           addScheduler(read1, read2, read3, read4, reader, reader2);

        }
        inputStream.close();
    }
    void writeFile(){
        ofstream outputStream;
        string fileName = "Saver.txt";
        outputStream.open("Saver.txt");
        string reader = "";
        for(unsigned int k = 0; k < sch.size(); k++){
            for(unsigned int i = 0; i < sch[k]->getSize(); i++){
                for(unsigned int j = 0; j < sch[k][i].size(); j++){
                    outputStream << sch[k]->[i][j].getMonth();
                    outputStream << sch[k][i][j].getDay();
                    outputStream << sch[k][i][j].getYear();
                    outputStream << sch[k][i][j].getPriority();
                    outputStream << sch[k][i][j].getTitle();
                    outputStream << sch[k][i][j].getNote();
                }
            }
        }
        outputStream.close();
    }
private:
    vector<PlanContainer*> sch;

};

#endif
