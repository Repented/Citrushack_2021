#ifndef PLANCONTAINER_H_
#define PLANCONTAINER_H_
#include "Plan.h"
#include <vector>
#include <time.h>
using namespace std;

class PlanContainer : public Plan {
    public:
        PlanContainer(int size = 31) {
            planList.resize(size);
        };
        PlanContainer(vector<vector<Plan>>);
        //~PlanContainer();
        vector<vector<Plan>> getPlanList(){ return planList; }
        const Plan getPlan(string, int);
        void createPlan(int month, int day, int year, int priority, string ti, string description);
        void printAllPlans();
        void removePlan(const Plan begonThot);
        void editPlans(string, int);
        unsigned getSize();
        //Plan checkPlan();
    private:
        vector<vector<Plan>> planList;
        int size;
        void sortPlan();
        string dateID();
        void selectionSort(vector<Plan> plans);
        void sortPriority();

};

#endif
