//
// Created by Alexey on 19.12.2020.
//

#include "ByID.h"

Task* ByID::Find() {
    for(int i = 0; i < tasks.size(); i++){
        if(tasks[i]->id == id)
            return tasks[i];
    }
}
