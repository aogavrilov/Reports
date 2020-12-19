cmake_minimum_required(VERSION 3.15)
project(Reports)

set(CMAKE_CXX_STANDARD 14)

add_executable(Reports InterfaceLayer/main.cpp LogicLayer/Worker/BaseWorker.cpp LogicLayer/Worker/BaseWorker.h LogicLayer/Worker/CompanyWorkers.cpp LogicLayer/Worker/CompanyWorkers.h)