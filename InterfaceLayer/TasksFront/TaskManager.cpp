//
// Created by Alexey on 20.12.2020.
//

#include "TaskManager.h"
#include "../../LogicLayer/Tasks/FindingRules/ByID.h"
#include <iostream>

Task *TaskManager::CreateTask() {
    string name;
    string description;
    Worker* worker;
    string workerName;
    //Task(string name, string description, Worker* worker) : name(name), description(description),
    //        worker(worker), dateOfCreating(GetTime()), statusOfProcessing(OPEN){};
    cout << "Write name of task: ";
    cin >> name;
    cout << endl << "Write description of task: ";
    cin >> description;
    cout << "Write worker name, which will be associated with task";
    cin >> workerName;
    worker = companyWorkers->FindWorkerByName(workerName);
    Task* task = new Task(name, description, worker);
    return task;
}

Comment *TaskManager::AddComment() {
    int taskID;
    string comment;
    string workerName;
    cout << "Write your name: ";
    cin >> workerName;
    Worker* worker = companyWorkers->FindWorkerByName(workerName);
    cout << endl << "Write task ID, which needed in comment: ";
    cin >> taskID;
    ByID* findRule = new ByID(tasks, taskID);
    Task* task = taskSystem->FindTask(findRule);
    cout << endl << "Write comment: ";
    cin >> comment;
    Comment* comment1 = task->AddComment(worker, comment);
    return comment1;
}

void TaskManager::ChangeStatusOfProcessing() {
    int taskID;
    int newStatus;
    cout << "Write ID of task: ";
    cin >> taskID;
    ByID* findRule = new ByID(tasks, taskID);
    Task* task = taskSystem->FindTask(findRule);
    cout << "Write new status of task: ";
    cin >> newStatus;
    task->ChangeStatusOfProcessing(static_cast<TaskStatus>(newStatus));


}

void TaskManager::ChangeWorker() {
    string workerName;
    int taskID;
    cout << "Write your name: ";
    cin >> workerName;
    Worker* worker = companyWorkers->FindWorkerByName(workerName);
    cout << "Write task id: ";
    cin >> taskID;
    ByID* findRule = new ByID(tasks, taskID);
    Task* task = taskSystem->FindTask(findRule);
    task->ChangeWorker(worker);
}
