#ifndef MANAGEMENT_ASSISTANT_DEVELOPER_H
#define MANAGEMENT_ASSISTANT_DEVELOPER_H
#include <utility>

#include "Employee.h"


class Developer: public Employee{
public:
    explicit Developer(std::string aPosition, int aSalary=2000)
        : Employee(std::move(aPosition),aSalary)
    {
    }
private:
    std::string project;
};


#endif //MANAGEMENT_ASSISTANT_DEVELOPER_H
