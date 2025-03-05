#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap1;
    ScavTrap scavtrap2("SCVTP");
    scavtrap1.attack("SCVTP");
    scavtrap1.guardGate();
    scavtrap2.guardGate();
    scavtrap2.takeDamage(1000);
    scavtrap2.takeDamage(1);
    scavtrap2.beRepaired(10);


    return 0;
}