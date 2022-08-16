cmake_minimum_required(VERSION 3.22)
project(management_assistant)

set(CMAKE_CXX_STANDARD 20)

add_executable(management_assistant main.cpp Employee.cpp Employee.h Developer.cpp Developer.h Manager.cpp Manager.h Chief.cpp Chief.h Adding_to_teams.cpp Adding_to_teams.h)
