//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_TASKSSYSTEM_H
#define REPORTS_TASKSSYSTEM_H


#include "Task.h"
#include "FindingRules/BaseRule.h"

class TasksSystem {
    vector<Task*> tasks;


public:
    Task* CreateTask(string name, string description, Worker* worker);
    Task* EditTaskStatus(Task* task, TaskStatus newStatus);
    Task* WorkerTask(Worker* worker);
    Task* FindTask(BaseRule* rule);

};


#endif //REPORTS_TASKSSYSTEM_H
