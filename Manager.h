#ifndef MANAGEMENT_ASSISTANT_MANAGER_H
#define MANAGEMENT_ASSISTANT_MANAGER_H

#include "Employee.h"

class Manager: public Employee{
public:
    Manager(std::string aName,std::string aPosition, int aSalary=2000)
    : Employee(std::move(aName),std::move(aPosition),aSalary)
    {
    }
};


#endif //MANAGEMENT_ASSISTANT_MANAGER_H
