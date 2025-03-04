#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap1;
    ScavTrap scavtrap2("SCVTP");
    scavtrap1.attack("SCVTP");
    scavtrap1.guardGate();
    scavtrap2.guardGate();
    


    return 0;
}