//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_BYID_H
#define REPORTS_BYID_H


#include "BaseRule.h"

class ByID : public BaseRule{

    int id;;
    Task* Find();

public:
    ByID(vector<Task*> tasks, int id) : BaseRule(tasks), id(id){}
};


#endif //REPORTS_BYID_H
