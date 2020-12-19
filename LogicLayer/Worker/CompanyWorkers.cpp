//
// Created by Alexey on 19.12.2020.
//

#include "CompanyWorkers.h"

Worker* CompanyWorkers::AddWorker(string name) {
    Worker* worker = new Worker(name);
    workers.push_back(worker);
    return worker;

}

Worker* CompanyWorkers::ChangeWorkersBoss(Worker* worker, Worker* boss) {
    worker->SetBoss(boss);
    return worker;
}

