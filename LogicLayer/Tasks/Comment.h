//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_COMMENT_H
#define REPORTS_COMMENT_H

#include "../Worker/Worker.h"
#include "../Log.h"
class Comment {
    string timeOfCreation;
    string comment;
public:
    Comment(Worker* creator, string comment);

    Worker* creator;
};


#endif //REPORTS_COMMENT_H
