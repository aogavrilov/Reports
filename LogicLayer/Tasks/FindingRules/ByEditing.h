//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_BYEDITING_H
#define REPORTS_BYEDITING_H


#include "BaseRule.h"

class ByEditing : BaseRule {
    Worker* worker;
    ByEditing(vector<Task*> tasks, Worker* worker) : BaseRule(tasks), worker(worker){};
    vector<Task*> Find();
};


#endif //REPORTS_BYEDITING_H
