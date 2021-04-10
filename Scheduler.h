#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "PlanContainer.h"

//this will be overarching class that does general stuff and prints menus
//also will be the one checking validity

class Scheduler : public PlanContainer {
public:
    bool dateIsEqual(Plan& lhs, Plan& rhs);
    Plan findPlan(const Plan& temp); //if say gui lets you click on a plan
    vector<Plan> findAllPlans(int m, int d, int y);
};

#endif
