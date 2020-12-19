cmake_minimum_required(VERSION 3.15)
project(Reports)

set(CMAKE_CXX_STANDARD 14)

add_executable(Reports InterfaceLayer/main.cpp LogicLayer/Worker/Worker.cpp LogicLayer/Worker/Worker.h LogicLayer/Worker/CompanyWorkers.cpp LogicLayer/Worker/CompanyWorkers.h LogicLayer/Tasks/Task.cpp LogicLayer/Tasks/Task.h LogicLayer/Tasks/TasksSystem.cpp LogicLayer/Tasks/TasksSystem.h LogicLayer/Report/BaseReport.cpp LogicLayer/Report/BaseReport.h LogicLayer/Report/DailyReport.cpp LogicLayer/Report/DailyReport.h LogicLayer/Report/SprintsReport.cpp LogicLayer/Report/SprintsReport.h LogicLayer/Tasks/Comment.cpp LogicLayer/Tasks/Comment.h LogicLayer/Tasks/FindingRules/ByID.cpp LogicLayer/Tasks/FindingRules/ByID.h LogicLayer/Tasks/FindingRules/ByDate.cpp LogicLayer/Tasks/FindingRules/ByDate.h LogicLayer/Tasks/FindingRules/BaseRule.h LogicLayer/Tasks/FindingRules/ByUser.cpp LogicLayer/Tasks/FindingRules/ByUser.h)