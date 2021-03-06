#ifndef PLAN_H
#define PLAN_H
#pragma once
#include <string>
#include <iostream>
using namespace std;
#include <QDebug>

enum type { Reminder, Event };

class Plan {
    protected: 
        type planType;
        int month;
        int day;
        int year;
        string title;
        string note;
        int priority;
    public:
        Plan() { planType = Reminder; month = 0; day = 0; year = 0; title = ""; note =""; priority = 1; }
        Plan(type re, int m, int d, int y, int p, string t, string n) {
            planType = re;
            month = m;
            day = d;
            year = y;
            priority = p;
            title = t;
            note = n;
        }

        //accessor methods
        type getType() {
            return planType;
        }

        int getMonth() {
            return month;
        }

        int getDay() {
            return day;
        }

        int getYear() {
            return year;
        }

        int getPriority() {
            return priority;
        }

        const string getTitle() {
            return title;
        }

        const string getNote() {
            return note;
        }

        //setter methods
        void setType(type p) {
            planType = p;
        }

        void setMonth(int m) {
            month = m;
        }

        void setDay(int d) {
            day = d;
        }

        void setYear(int y) {
            year = y;
        }

        void setPriority(int p) {
            priority = p;
        }

        void setTitle(string t) {
            title = t;
        }

        void setNote(string n) {
            note = n;
        }

        //to allow us to compare reminders/events
        friend bool operator==(const Plan& lhs, const Plan& rhs) //we don't want to modify
        {
            return (lhs.planType == rhs.planType &&
                    lhs.month == rhs.month && lhs.day == rhs.day &&
                    lhs.year == rhs.year && lhs.title == rhs.title &&
                    lhs.note == rhs.note
            );
        }

        QString printPlan() {
            QString tempString;
//            if (planType == Reminder) {
//                tempString.append("Reminder on ");
//            } else {
//                tempString.append("Event on ");
//            }
            tempString.append(QString::number(month));
            tempString.append("/");
            tempString.append(QString::number(day));
            tempString.append("/");
            tempString.append(QString::number(year));
            tempString.append(": \n");
            tempString.append("Title: ");
            tempString.append(QString::fromStdString(getTitle()));
            tempString.append("\n");
            tempString.append("Note: ");
            tempString.append(QString::fromStdString(getNote()));
            tempString.append("\n");
            return tempString;
        }
};

#endif
