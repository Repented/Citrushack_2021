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
            vector<Plan> dummy = vector<Plan>();
            for(unsigned i = 0; i < planList.size();i++) {
                planList.at(i) = dummy;
            }
        };
        PlanContainer(vector<vector<Plan>>);
        //~PlanContainer();
        vector<vector<Plan>> getPlanList(){ return planList; }
        const Plan getPlan(string, int);
        void createPlan(type pT, int month, int day, int year, int priority, string ti, string description);
        vector<QString> printAllPlans();
        void removePlan(const Plan begonThot);

        vector<Plan> getDayVect(int dayy){
            return planList.at(dayy-1);
        }

        void editPlans(Plan, Plan);
        unsigned getSize();
        //Plan checkPlan();
    protected:
        vector<vector<Plan>> planList;
        int size;
        void sortPlan();
        string dateID();
        void selectionSort(vector<Plan> plans);
        void sortPriority();

};

#endif
