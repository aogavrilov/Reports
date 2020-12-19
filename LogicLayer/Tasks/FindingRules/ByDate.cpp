//
// Created by Alexey on 20.12.2020.
//

#include "ByDate.h"

Task *ByDate::Find() {
    for(int i = 0; i < tasks.size(); i++){
        if(tasks[i]->dateOfCreating == date)
            return tasks[i];
    }
}
