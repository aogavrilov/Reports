//
// Created by Alexey on 20.12.2020.
//

#include <iostream>
#include "ReportManager.h"
#include "../../LogicLayer/Tasks/FindingRules/ByID.h"

DailyReport *ReportManager::CreateDailyReport() {
    int taskID;
    cout << "Write task ID: ";
    cin >> taskID;
    ByID* findRule = new ByID(tasks, taskID);
    Task* task = taskSystem->FindTask(findRule);
    DailyReport* report = new DailyReport(task, task->comments);
}
