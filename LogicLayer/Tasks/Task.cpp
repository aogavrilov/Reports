//
// Created by Alexey on 19.12.2020.
//

#include "Task.h"

Comment* Task::AddComment(Worker *worker, string comment) {
    Comment* comment1 = new Comment(worker, comment);
    this->comments.push_back(comment1);
    this->dateOfEditing = GetTime();
    return comment1;
}

void Task::ChangeStatusOfProcessing(TaskStatus statusOfProcessing) {
    this->statusOfProcessing = statusOfProcessing;
}
