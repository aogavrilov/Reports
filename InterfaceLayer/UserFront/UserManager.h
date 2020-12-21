//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_USERMANAGER_H
#define REPORTS_USERMANAGER_H


#include "../../LogicLayer/Worker/Worker.h"
#include "../../LogicLayer/Worker/CompanyWorkers.h"
#include "../../LogicLayer/Tasks/Task.h"

class UserManager {
    CompanyWorkers* companyWorkers;
    vector<Task*> tasks;
    Worker* CreateWorker();
    Worker* SetBoss();
};


#endif //REPORTS_USERMANAGER_H
