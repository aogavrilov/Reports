//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_BASERULE_H
#define REPORTS_BASERULE_H
#include "../Task.h"

class BaseRule {
    Task* Find();;
protected:
    BaseRule(vector<Task*> tasks) : tasks(tasks){}

    vector<Task*> tasks;
};


#endif //REPORTS_BASERULE_H
