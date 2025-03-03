#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1;
    ClapTrap claptrap2("CLTP");

    std::cout << "Initial state of claptrap1:" << std::endl;
    claptrap1.attack("target1");

    std::cout << "Initial state of claptrap2:" << std::endl;
    claptrap2.attack("target2");

    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2");
    claptrap2.attack("target2"); 

    ClapTrap claptrap3 = claptrap2;
    claptrap3.attack("target3");

    claptrap1 = claptrap2;
    claptrap1.attack("target4");

    return 0;
}