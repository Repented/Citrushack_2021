#ifndef SCHEDULER_H
#define SCHEDULER_H
#include<iostream>
#include <fstream>
#include "PlanContainer.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>

//this will be overarching class that does general stuff and prints menus
//also will be the one checking validity

class Scheduler : public PlanContainer {
public:
    Scheduler(){
        sch.resize(12);
        for (int i = 0; i < 12; i++) {
            sch.at(i) = new PlanContainer();
        }
    }
    bool dateIsEqual(Plan& lhs, Plan& rhs);
    Plan findPlan(int month, int day, int year, int index) {
        vector<Plan> plans = findAllPlans(month, day, year);
        return plans.at(index);
    }
    vector<Plan> findAllPlans(int m, int d, int year) {
        vector<Plan> plansThisYear;
        plansThisYear = sch.at(m-1)->getPlanList().at(d-1);
        for (unsigned int i = 0; i < plansThisYear.size(); i++) {
            if (plansThisYear.at(i).getYear() != year) {
                plansThisYear.erase(plansThisYear.begin() + i);
            }
        }
        return plansThisYear;
    }

    bool findIfExists(Plan temp) {
        vector<Plan> plansThisYear;
        plansThisYear = sch.at(temp.getMonth()-1)->getPlanList().at(temp.getDay()-1);
        for (unsigned i = 0; i < plansThisYear.size(); i++) {
            if (temp.getType() == plansThisYear.at(i).getType() &&
                temp.getYear() == plansThisYear.at(i).getYear() &&
                temp.getTitle() == plansThisYear.at(i).getTitle() &&
                temp.getPriority() == plansThisYear.at(i).getPriority() &&
                temp.getNote() == plansThisYear.at(i).getNote()
            ) {
                return true;
            }
        }
        return false;
    }

    void removePlanSched(int m, int d, int year, string title, string note, type pT) {
        for (unsigned i = 0; i < sch.at(m-1)->getPlanList().at(d-1).size(); i++) {
            if (sch.at(m-1)->getPlanList().at(d-1).at(i).getYear() == year
                && sch.at(m-1)->getPlanList().at(d-1).at(i).getDay() == day
                && sch.at(m-1)->getPlanList().at(d-1).at(i).getMonth() == month
                && sch.at(m-1)->getPlanList().at(d-1).at(i).getTitle() == title
                && sch.at(m-1)->getPlanList().at(d-1).at(i).getNote() == note
                && sch.at(m-1)->getPlanList().at(d-1).at(i).getType() == pT) {
                sch.at(m-1)->getPlanList().at(d-1).erase(sch.at(m-1)->getPlanList().at(d-1).begin() + i);
            }
        }
    }

    void printYearPlans() {
        qDebug() << "Does it print?";
//        qDebug() << sch.at(0)->getPlanList().at(3).size();
//        sch.at(0)->getPlanList().at(0).at(0).printPlan();
        for (unsigned i = 0; i < sch.size(); i++) {
            sch.at(i)->printAllPlans();
        }
    }
    void resizer() {
        qDebug() << sch.at(0)->getSize();
    }
    vector<PlanContainer*> getScheduler(){
        return sch;
    }
    void addScheduler(type pT, int month, int day, int year, int priority, string ti, string note){
        sch.at(month-1)->createPlan(pT, month, day, year, priority, ti, note);
    }

    void editScheduler(Plan b, Plan a) {
        sch.at(b.getMonth()-1)->editPlans(b,a);
    }
    void readFile(){
        int month, day, year, priority;
        QString title, note;
        QFile file("save.txt");
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            type pT;
            while (!in.atEnd()) {
                if (in.readLine() == "Reminder") {
                    pT = Reminder;
                } else {
                    pT = Event;
                }
                month = in.readLine().toInt();
                day = in.readLine().toInt();
                year = in.readLine().toInt();
                priority = in.readLine().toInt();
                title = in.readLine();
                note = in.readLine();
                qDebug()<<note;
//                if (in.atEnd()) {
//                    qDebug() << "Wrong end motherfucker";
//                }
                addScheduler(pT,month, day, year, priority, title.toStdString(), note.toStdString());
            }
            file.close();
        }
//        ifstream inputStream;
//        string fileName = "Saver.txt";
//        inputStream.open("Saver.txt");

//        string reader = "";
//        string reader2 = "";
//        PlanContainer pc1;
//        //reads in the format
//        //int month, int day, int year, int priority, string ti, string note

//        while(inputStream >> read1){  //month
//            inputStream >> read2;     //day
//            inputStream >> read3;     //year
//            inputStream >> read4;     //priority
//            inputStream >> reader;    //ti
//            inputStream >> reader2;   //note

//           addScheduler(read1, read2, read3, read4, reader, reader2);

//        }
//        inputStream.close();
    }
    void writeFile(){
        QFile myfile("save.txt");
        myfile.resize(0);
        if (myfile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&myfile);
            for(unsigned int k = 0; k < sch.size(); k++){
                for(unsigned int i = 0; i < sch[k]->getSize(); i++){
                    for(unsigned int j = 0; j < sch[k]->getPlanList().at(i).size(); j++){
                        if (sch[k]->getPlanList().at(i).at(j).getType() == Reminder) {
                            out << "Reminder" << "\n";
                        } else {
                            out << "Event" << "\n";
                        }
                        out << sch[k]->getPlanList().at(i).at(j).getMonth() << "\n";
                        out << sch[k]->getPlanList().at(i).at(j).getDay() << "\n";
                        out << sch[k]->getPlanList().at(i).at(j).getYear() << "\n";
                        out << sch[k]->getPlanList().at(i).at(j).getPriority() << "\n";
                        out << QString::fromStdString(sch[k]->getPlanList().at(i).at(j).getTitle()) << "\n";
                        out << QString::fromStdString(sch[k]->getPlanList().at(i).at(j).getNote()) << "\n";
                    }
                }
            }
        }
        myfile.resize(myfile.pos());
        myfile.close();
    }

private:
    vector<PlanContainer*> sch;

};

#endif
