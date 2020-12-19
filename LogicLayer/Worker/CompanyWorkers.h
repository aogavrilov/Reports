//
// Created by Alexey on 19.12.2020.
//

#ifndef REPORTS_COMPANYWORKERS_H
#define REPORTS_COMPANYWORKERS_H

#include "Worker.h"
#include <vector>
using namespace std;
class CompanyWorkers {
    vector<Worker*> workers;

public:
    CompanyWorkers()= default;
    Worker* AddWorker(string name);
    Worker* ChangeWorkersBoss(Worker* worker, Worker* boss);

};


#endif //REPORTS_COMPANYWORKERS_H
