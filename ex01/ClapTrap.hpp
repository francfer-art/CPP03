#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
  protected:
    std::string _name;
    int _hitpoints;
    int _energypoints;
    int _attackdamage;
  
  public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(std::string name);
    ClapTrap();
    virtual ~ClapTrap();
    ClapTrap(const ClapTrap& claptrap);
    ClapTrap& operator=(const ClapTrap& claptrap);
};

#endif