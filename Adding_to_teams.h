#ifndef MANAGEMENT_ASSISTANT_ADDING_TO_TEAMS_H
#define MANAGEMENT_ASSISTANT_ADDING_TO_TEAMS_H

#include <utility>
#include <vector>
#include <iostream>
#include "Developer.h"
#include "Manager.h"
#include "Chief.h"
#include "Employee.h"
#include <algorithm>
#include <unordered_map>

class Adding_to_teams {
public:

    void add_developer(std::string name,std::string position){
        Developer temp(std::move(name),position);
        vector_of_developers.push_back(temp);
    };

    void add_manager(std::string name,std::string position){
        Manager temp(std::move(name), position);
        vector_of_managers.push_back(temp);
    }

    void add_chief(std::string name,std::string position){
        Chief temp(std::move(name), position);
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


    void add_project_to_list(std::string projectName){
        auto search = project_list.find(projectName);
        if (search != project_list.end()) {
            std::cout<<"Project is already on the list\n";
        } else {
            std::vector <Employee> temp;
            project_list[projectName]=temp;
        }
    }

    void add_developer_to_project(std::string projectName, std::string developerName){
        project_list[projectName].push_back(vector_of_developers[find_position(developerName)]);
        vector_of_developers[find_position(developerName)].set_project(projectName);
    }


    int find_position(std::string developerName){
        int it=0;
        for(auto name: vector_of_developers){
            if(name.getName()==developerName){
                return it;
            }
            else{
                it++;
            }
        }

    }

    //void show_project_list();

private:
    std::vector<Developer> vector_of_developers;
    std::vector<Manager> vector_of_managers;
    std::vector<Chief> vector_of_chiefs;
    std::unordered_map<std::string , std::vector<Employee>> project_list;
};


#endif //MANAGEMENT_ASSISTANT_ADDING_TO_TEAMS_H
