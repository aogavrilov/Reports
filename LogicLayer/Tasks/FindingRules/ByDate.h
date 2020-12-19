//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_BYDATE_H
#define REPORTS_BYDATE_H


#include "BaseRule.h"

class ByDate : BaseRule{
    string date;
    ByDate(vector<Task*> tasks, string date) : BaseRule(tasks), date(date){};
    Task* Find();
};


#endif //REPORTS_BYDATE_H
