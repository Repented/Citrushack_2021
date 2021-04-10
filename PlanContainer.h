#ifndef PLANCONTAINER_H_
#define PLANCONTAINER_H_
#include "Plan.h"
#include <vector>
#include <time.h>
using namespace std;

class PlanContainer : public Plan {
    public:
        PlanContainer(vector<vector<Plan>>);
        //~PlanContainer();
        vector<vector<Plan>> getPlanList(){ return planList; }
        Plan getPlan(type, int, vector<vector<Plan>>);
        void createPlan(string name, int month, int day, int year, int priority, string ti, string description, vector<vector<Plan>> plans);
        void printAllPlans();
        void PlanContainer::removePlan(const Plan begonThot);
	void editPlans(string, int, vector<vector<Plan>>);
        //Plan checkPlan();
    private:
        vector<vector<Plan>> planList;
        void sortPlan();
        string dateID();

};

#endif