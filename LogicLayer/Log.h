//
// Created by Alexey on 20.12.2020.
//

#ifndef REPORTS_LOG_H
#define REPORTS_LOG_H

#include <vector>
#include <string>
#include <time.h>

using namespace std;
static string GetTime(){
    time_t curTime;
    struct tm* locTime;
    char buffer[12];
    time(&curTime);
    locTime = localtime(&curTime);
    strftime(buffer, 12, "%Y/%m/%d", locTime);
    return buffer;
}
class Log {
    string time;
    string action;
    Log(string action) : action(action), time(GetTime()){};
};

vector<Log*> logItems;

#endif //REPORTS_LOG_H
