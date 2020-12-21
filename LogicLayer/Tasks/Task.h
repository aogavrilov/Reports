//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_TASK_H
#define REPORTS_TASK_H
#include <string>

#include "TasksEnums"
#include "Comment.h"
#include <vector>
using namespace std;

class Task {

    string description;
    string dateOfEditing;


public:
    int id;
    string name;
    TaskStatus statusOfProcessing;
    Task(string name, string description, Worker* worker) : name(name), description(description),
        worker(worker), dateOfCreating(GetTime()), statusOfProcessing(OPEN){};
    Comment* AddComment(Worker* worker, string comment);
    void ChangeStatusOfProcessing(TaskStatus statusOfProcessing);
    void ChangeWorker(Worker* worker){this->worker = worker;};
    string dateOfCreating;
    Worker* worker;
    vector<Comment*> comments;

};


#endif //REPORTS_TASK_H
