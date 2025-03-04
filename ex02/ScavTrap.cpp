#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  _name = name;
  _hitpoints = 100;
  _energypoints = 50;
  _attackdamage = 20;
  _gateMode = false;
  std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
  _name = "ScavTrap";
  _hitpoints = 100;
  _energypoints = 50;
  _attackdamage = 20;
  _gateMode = false;
  std::cout << _name << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap" << _name << " has been destroyed! " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
  _name = scavtrap._name;
  _hitpoints = scavtrap._hitpoints;
  _energypoints = scavtrap._energypoints;
  _attackdamage = scavtrap._attackdamage;
  _gateMode = scavtrap._gateMode;
  std::cout << "ScavTrap " << _name << " has been created." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
  _name = scavtrap._name;
  _hitpoints = scavtrap._hitpoints;
  _energypoints = scavtrap._energypoints;
  _attackdamage = scavtrap._attackdamage;
  _gateMode = scavtrap._gateMode;
  std::cout << "ScavTrap " << _name << " has been created." << std::endl;
  return *this;
}

void ScavTrap::guardGate()
{
  _gateMode = true;
  std::cout << "ScavTrap " << _name << " is now in  Gate Keeper mode." << std::endl;
}