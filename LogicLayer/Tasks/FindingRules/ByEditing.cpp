//
// Created by Alexey on 20.12.2020.
//
#include "ByEditing.h"
vector<Task*> ByEditing::Find() {
    vector<Task*> tasks = vector<Task*>();
    for(int i = 0; i < tasks.size(); i++){
        auto comments = tasks[i]->comments;
        for(int j = 0; j < comments.size(); j++){
            if(comments[j]->creator == worker)
                tasks.push_back(tasks[i]);
        }
    }
    return tasks;
}