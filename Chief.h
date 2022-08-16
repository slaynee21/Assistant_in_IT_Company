#ifndef MANAGEMENT_ASSISTANT_CHIEF_H
#define MANAGEMENT_ASSISTANT_CHIEF_H

#include "Employee.h"


class Chief: public Employee{
public:
    explicit Chief(std::string aPosition, int aSalary=2000)
    : Employee(std::move(aPosition),aSalary)
    {
    }
};


#endif //MANAGEMENT_ASSISTANT_CHIEF_H
