#ifndef MANAGEMENT_ASSISTANT_DEVELOPER_H
#define MANAGEMENT_ASSISTANT_DEVELOPER_H
#include <utility>

#include "Employee.h"


class Developer: public Employee{
public:
    Developer(std::string aName,std::string aPosition, int aSalary=2000)
        : Employee(std::move(aName),std::move(aPosition),aSalary)
    {
    }

    std::string get_project(){
        return project;
    }

    void set_project(std::string projectName){
        project=projectName;
    }
private:
    std::string project;
};


#endif //MANAGEMENT_ASSISTANT_DEVELOPER_H
