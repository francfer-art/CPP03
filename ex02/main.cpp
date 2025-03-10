// #include <iostream>
// #include "ClapTrap.hpp"
// #include "ScavTrap.hpp"

// int main() {
//     ScavTrap scavtrap1;
//     ScavTrap scavtrap2("SCVTP");
//     scavtrap1.attack("SCVTP");
//     scavtrap1.guardGate();
//     scavtrap2.guardGate();
    


//     return 0;
// }

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		FragTrap e("Epsilon");
		FragTrap g("Gamma");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		e.highFivesGuys();
		e.attack("some random dude");
		e.takeDamage(99);
		e.takeDamage(1);
		e.attack("some random dude");
		g.highFivesGuys();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}