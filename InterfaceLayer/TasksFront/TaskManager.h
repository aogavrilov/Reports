//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_TASKMANAGER_H
#define REPORTS_TASKMANAGER_H

#include <string>
#include "../../LogicLayer/Tasks/Task.h"
#include "../../LogicLayer/Worker/CompanyWorkers.h"
#include "../../LogicLayer/Tasks/TasksSystem.h"

using namespace std;
class TaskManager {
    string name;
    string description;
    CompanyWorkers* companyWorkers;
    vector<Task*> tasks;
    TasksSystem* taskSystem = new TasksSystem();
    TaskManager(CompanyWorkers* companyWorkers) : companyWorkers(companyWorkers){};
    Task* CreateTask();
    Comment* AddComment();
    void ChangeStatusOfProcessing();
    void ChangeWorker();
};


#endif //REPORTS_TASKMANAGER_H
