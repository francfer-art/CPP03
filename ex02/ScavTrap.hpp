#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  private:
    bool _gateMode;
  public:
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap& scavtrap);
    ScavTrap& operator=(const ScavTrap& scavtrap);
    void guardGate();
};

#endif