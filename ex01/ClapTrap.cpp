#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
  std::cout << "Default constructor called" << std::endl;
  _hitpoints = 10;
  _energypoints = 10;
  _attackdamage = 0;
}

ClapTrap::~ClapTrap()
{
  std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
  std::cout << "Name constructor called" << std::endl;
  _name = name;
  _hitpoints = 10;
  _energypoints = 10;
  _attackdamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = claptrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &claptrap)
  {
    _name = claptrap._name;
    _hitpoints = claptrap._hitpoints;
    _energypoints = claptrap._energypoints;
    _attackdamage = claptrap._attackdamage;
  }
  return *this;
}

void ClapTrap::attack(const std::string& target)
{
  if (_energypoints > 0)
  {
    std::cout <<  _name << " attacks " << target << ", causing " << _attackdamage << " points of damage! " << std::endl;
    _energypoints--;
  } else 
  {
    std::cout << _name << " is out of energy and cannot attack!" << std::endl;
  }
}