//#include <iostream>
#include "Adding_to_teams.h"

using namespace std;

int main() {
    Adding_to_teams adding;
    adding.add_developer("Software Engineer");
    adding.add_manager("manager 1");
    adding.add_chief("ceo");
    adding.show_manager(0);
    adding.show_developer(0);
    adding.show_chief(0);
    return 0;
}
