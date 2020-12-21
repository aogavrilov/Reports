//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_BYSUBORDINATIONSOFUSER_H
#define REPORTS_BYSUBORDINATIONSOFUSER_H


#include "BaseRule.h"

class BySubordinationsOfUser : BaseRule {
    Worker* worker;
    BySubordinationsOfUser(vector<Task*> tasks, Worker* worker) : BaseRule(tasks), worker(worker){};
    vector<Task*> Find();
};


#endif //REPORTS_BYSUBORDINATIONSOFUSER_H
