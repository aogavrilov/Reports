//
// Created by Alexey on 20.12.2020.
//

#include <iostream>
#include "UserManager.h"

Worker *UserManager::CreateWorker() {
    string name;
    cout << "Write worker name: ";
    cin >> name;
    Worker* worker = new Worker(name);
}

Worker *UserManager::SetBoss() {
    string bossName;
    string workerName;
    cout << "Write worker name: ";
    cin >> workerName;
    Worker* worker = companyWorkers->FindWorkerByName(workerName);
    cout << "Write boss name: ";
    cin >> bossName;
    Worker* boss = companyWorkers->FindWorkerByName(bossName);
    worker->SetBoss(boss);
    return worker;
}
