//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_BYUSER_H
#define REPORTS_BYUSER_H


#include "BaseRule.h"

class ByUser : BaseRule{
    Worker* worker;
    ByUser(vector<Task*> tasks, Worker* worker) : BaseRule(tasks), worker(worker){};
    Task* Find();
};


#endif //REPORTS_BYUSER_H
