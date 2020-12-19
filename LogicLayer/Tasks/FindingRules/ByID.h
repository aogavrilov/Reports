//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_BYID_H
#define REPORTS_BYID_H


#include "BaseRule.h"

class ByID : BaseRule{

    int id;
    ByID(vector<Task*> tasks, int id) : BaseRule(tasks), id(id){};
    Task* Find();
};


#endif //REPORTS_BYID_H
