//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_REPORTMANAGER_H
#define REPORTS_REPORTMANAGER_H


#include "../../LogicLayer/Report/BaseReport.h"
#include "../../LogicLayer/Report/DailyReport.h"
#include "../../LogicLayer/Report/SprintsReport.h"
#include "../../LogicLayer/Worker/CompanyWorkers.h"
#include "../../LogicLayer/Tasks/TasksSystem.h"

class ReportManager {
    CompanyWorkers* companyWorkers;
    vector<Task*> tasks;
    TasksSystem* taskSystem = new TasksSystem();

    DailyReport* CreateDailyReport();
    SprintsReport* CreateSprintsReport();

};


#endif //REPORTS_REPORTMANAGER_H
