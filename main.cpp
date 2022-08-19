//#include <iostream>
#include "Adding_to_teams.h"

using namespace std;

int main() {
    Adding_to_teams adding;
    adding.add_developer("abobus", "Software Engineer");
    adding.add_developer("abobus1", "Software Engineer");
    adding.add_developer("abobus5", "Software Engineer");
    adding.add_developer("abobus4", "Software Engineer");
    adding.add_manager("abobus 2","manager 1");
    adding.add_chief("abobus 3","ceo");
    adding.show_manager(0);
    adding.show_developer(0);
    adding.show_chief(0);
    adding.find_position("abobus4");
    adding.add_project_to_list("Project 2");
    adding.add_project_to_list("Project 1");
    adding.add_project_to_list("Project 1");
    adding.add_developer_to_project("Project 1", "abobus4");
    adding.add_developer_to_project("Project 1", "abobus1");
    return 0;
}
