#ifndef MANAGEMENT_ASSISTANT_CHIEF_H
#define MANAGEMENT_ASSISTANT_CHIEF_H

#include "Employee.h"


class Chief: public Employee{
public:
    Chief(std::string aName,std::string aPosition, int aSalary=2000)
    : Employee(std::move(aName),std::move(aPosition),aSalary)
    {
    }
};


#endif //MANAGEMENT_ASSISTANT_CHIEF_H
