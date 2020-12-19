//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_TASKSSYSTEM_H
#define REPORTS_TASKSSYSTEM_H


#include "Task.h"

class TasksSystem {
    vector<Task*> tasks;


public:
    Task* CreateTask();
    Task* EditTaskStatus();
    vector<Task*> WorkerTasks();
    Task* FindTask();

};


#endif //REPORTS_TASKSSYSTEM_H
