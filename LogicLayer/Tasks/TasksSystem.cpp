//
// Created by Alexey on 19.12.2020.
//

#include "TasksSystem.h"

Task *TasksSystem::CreateTask(string name, string description, Worker* worker) {
    Task* task = new Task(name, description, worker);
    tasks.push_back(task);
    return task;
}

Task *TasksSystem::EditTaskStatus(Task *task, TaskStatus newStatus) {
    task->statusOfProcessing = newStatus;
    return task;
}

Task *TasksSystem::WorkerTask(Worker *worker) {
    for(auto task : tasks){
        if(task->worker == worker)
            return task;
    }
    return nullptr;
}

Task *TasksSystem::FindTask(BaseRule *rule) {
    return rule->Find();
}


