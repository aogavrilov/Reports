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
    int id;
    string name;
    string description;
    Worker* worker;
    TaskStatus statusOfProcessing;
    vector<Comment*> comments;
    string dateOfEditing;
    string dateOfCreating;


public:
    Task(string name, string description, Worker* worker) : name(name), description(description),
        worker(worker), dateOfCreating(GetTime()){};
    Comment* AddComment(Worker* worker, string comment);
    void ChangeStatusOfProcessing(TaskStatus statusOfProcessing);
};


#endif //REPORTS_TASK_H
