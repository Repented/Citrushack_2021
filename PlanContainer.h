#ifndef PLANCONTAINER_H_
#define PLANCONTAINER_H_
#include "Plan.h"
#include <vector>
#include <time.h>
using namespace std;

class PlanContainer : public Plan {
    public:
        PlanContainer();
        PlanContainer(vector<vector<Plan>>);
        //~PlanContainer();
        vector<vector<Plan>> getPlanList(){ return planList; }
        Plan getPlan(string, int);
        void createPlan(int month, int day, int year, int priority, string ti, string description);
        void printAllPlans();
        void removePlan(const Plan begonThot);
	    void editPlans(string, int);
        //Plan checkPlan();
        void sortPriority();
    private:
        vector<vector<Plan>> planList;
        //TODO: make a whole array of 12 arrays of different sizes for different months, which those arrays include vectors that hold our plans
        vector<Plan> planStuff[31];
        void sortPlan();
        string dateID();
        void selectionSort(vector<Plan> plans);

};

#endif