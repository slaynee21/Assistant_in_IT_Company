#ifndef MANAGEMENT_ASSISTANT_EMPLOYEE_H
#define MANAGEMENT_ASSISTANT_EMPLOYEE_H

#include <string>
#include <utility>


class Employee {
public:
    Employee(std::string aName, std::string aPosition, int aSalary)
        : name(std::move(aName)),position(std::move(aPosition)), salary(aSalary){
    }

   Employee()= default;;

    int getSalary() const{
        return salary;
    }

    void setSalary(int newSalary){
        salary=newSalary;
    }

    std::string getPosition() const{
        return position;
    }

    std::string getName(){
        return name;
    }

    void setPosition(std::string newPosition){
        position=std::move(newPosition);
    }

protected:
    int salary{0};
    std::string position;
    std::string name;
};


#endif //MANAGEMENT_ASSISTANT_EMPLOYEE_H
