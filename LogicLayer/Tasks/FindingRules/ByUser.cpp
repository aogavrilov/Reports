//
// Created by Alexey on 20.12.2020.
//

#include "ByUser.h"
Task* ByUser::Find() {
    for(int i = 0; i < tasks.size(); i++){
        if(tasks[i]->worker == worker)
            return tasks[i];
    }
}
