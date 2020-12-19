//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_COMMENT_H
#define REPORTS_COMMENT_H

#include "../Worker/Worker.h"
#include <time.h>
static string GetTime(){
    time_t curTime;
    struct tm* locTime;
    char buffer[12];
    time(&curTime);
    locTime = localtime(&curTime);
    strftime(buffer, 12, "%Y/%m/%d", locTime);
    return buffer;
}
class Comment {
    Worker* creator;
    string timeOfCreation;
    string comment;
public:
    Comment(Worker* creator, string comment);
};


#endif //REPORTS_COMMENT_H
