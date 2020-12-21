//
// Created by Alexey on 20.12.2020.
//

#include "BySubordinationsOfUser.h"
vector<Task*> BySubordinationsOfUser::Find() {
    vector<Task*> tasks = vector<Task*>();
    for(int i = 0; i < tasks.size(); i++){
        if(tasks[i]->worker->GetBoss() == worker)
            tasks.push_back(tasks[i]);
    }
    return tasks;
}
