#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  _name = name;
  _hitpoints = 100;
  _energypoints = 100;
  _attackdamage = 30;
  std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap()
{
  _name = "FragTrap";
  _hitpoints = 100;
  _energypoints = 100;
  _attackdamage = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
  _name = fragTrap._name;
  _hitpoints = fragTrap._hitpoints;
  _energypoints = fragTrap._energypoints;
  _attackdamage = fragTrap._attackdamage;
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
  _name = fragTrap._name;
  _hitpoints = fragTrap._hitpoints;
  _energypoints = fragTrap._energypoints;
  _attackdamage = fragTrap._attackdamage;
  std::cout << "FragTrap assignation operator called" << std::endl;
  return *this;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << _name << " requests a high five! 🙏" << std::endl;
}