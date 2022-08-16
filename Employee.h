#ifndef MANAGEMENT_ASSISTANT_EMPLOYEE_H
#define MANAGEMENT_ASSISTANT_EMPLOYEE_H

#include <string>
#include <utility>


class Employee {
public:
    explicit Employee(std::string aPosition, int aSalary)
        : position(std::move(aPosition)), salary(aSalary){
    }

    int getSalary() const{
        return salary;
    }

    void setSalary(int newSalary){
        salary=newSalary;
    }

    std::string getPosition() const{
        return position;
    }

    void setPosition(std::string newPosition){
        position=std::move(newPosition);
    }

protected:
    int salary{0};
    std::string position;
    std::vector<Employee>
};


#endif //MANAGEMENT_ASSISTANT_EMPLOYEE_H
