//
// Created by Alexey on 19.12.2020.
//

#include "Comment.h"


Comment::Comment(Worker *creator, string comment) : creator(creator), comment(comment) {

    this->timeOfCreation = GetTime();


}
