//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_WORKER_H
#define REPORTS_WORKER_H

#include <string>
#include <vector>

using namespace std;
class DailyReport;
class Worker {
    Worker* boss;
    vector<Worker*> subordinates;
public:
    Worker(string name) : name(name){};
    Worker* SetBoss(Worker* boss);
    Worker* GetBoss(){return boss;};
    Worker* SetSubordinates(vector<Worker*> subordinates);
    //DailyReport* report = new DailyReport()
    string name;
};


#endif //REPORTS_WORKER_H
