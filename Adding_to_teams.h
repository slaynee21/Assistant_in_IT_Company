#ifndef MANAGEMENT_ASSISTANT_ADDING_TO_TEAMS_H
#define MANAGEMENT_ASSISTANT_ADDING_TO_TEAMS_H

#include <vector>
#include <iostream>
#include "Developer.h"
#include "Manager.h"
#include "Chief.h"

class Adding_to_teams {
public:
    void add_developer(std::string position){
        Developer temp(position);
        vector_of_developers.push_back(temp);
    };

    void add_manager(std::string position){
        Manager temp(position);
        vector_of_managers.push_back(temp);
    }

    void add_chief(std::string position){
        Chief temp(position);
        vector_of_chiefs.push_back(temp);
    }

    void show_manager(int position){
        std::cout<<"Position: "<<vector_of_managers[position].getPosition()<<std::endl;
        std::cout<<"Salary: "<<vector_of_managers[position].getSalary()<<std::endl;
    }

    void show_developer(int position){
        std::cout<<"Position: "<<vector_of_developers[position].getPosition()<<std::endl;
        std::cout<<"Salary: "<<vector_of_developers[position].getSalary()<<std::endl;
    }

    void show_chief(int position){
        std::cout<<"Position: "<<vector_of_chiefs[position].getPosition()<<std::endl;
        std::cout<<"Salary: "<<vector_of_chiefs[position].getSalary()<<std::endl;
    }
private:
    std::vector<Developer> vector_of_developers;
    std::vector<Manager> vector_of_managers;
    std::vector<Chief> vector_of_chiefs;
};


#endif //MANAGEMENT_ASSISTANT_ADDING_TO_TEAMS_H
