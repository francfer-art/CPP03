#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  _name = name;
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap()
{
  _name = "FragTrap";
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
  _name = fragTrap._name;
  _hitPoints = fragTrap._hitPoints;
  _energyPoints = fragTrap._energyPoints;
  _attackDamage = fragTrap._attackDamage;
  std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
  _name = fragTrap._name;
  _hitPoints = fragTrap._hitPoints;
  _energyPoints = fragTrap._energyPoints;
  _attackDamage = fragTrap._attackDamage;
  std::cout << "FragTrap assignation operator called" << std::endl;
  return *this;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << _name << " requests a high five! 🙏" << std::endl;
}