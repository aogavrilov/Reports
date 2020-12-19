//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_DAILYREPORT_H
#define REPORTS_DAILYREPORT_H

#include <string>
#include "../Tasks/Task.h"

using namespace std;

class DailyReport {
    string timeOfCreation;
    Task* dayTask;
    vector<Comment*> dayComments;


public:
    DailyReport(Task* dayTask, vector<Comment*> dayComments) : dayTask(dayTask), dayComments(dayComments),
        timeOfCreation(GetTime()){};
    vector<Comment*> ShowTasks(){return dayComments;};

};


#endif //REPORTS_DAILYREPORT_H
