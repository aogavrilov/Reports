//
// Created by Alexey on 19.12.2020.
//

#include "Worker.h"

Worker* Worker::SetBoss(Worker* boss) {
    this->boss = boss;
    return this;
}

Worker* Worker::SetSubordinates(vector<Worker*> subordinates) {
    this->subordinates = subordinates;
    return this;
}
