//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_SPRINTSREPORT_H
#define REPORTS_SPRINTSREPORT_H

#include "DailyReport.h"
class SprintsReport {
    vector<DailyReport*> dailyReports;
    bool isSaved = false;
    string comment;
public:
    SprintsReport(vector<DailyReport*> dailyReports, string comment) : dailyReports(dailyReports), comment(comment){};
    void SaveReport(){isSaved=true;};
    bool GetState(){return isSaved;};
};


#endif //REPORTS_SPRINTSREPORT_H
