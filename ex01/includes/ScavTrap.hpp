#pragma once
#include "ClapTrap.hpp"
#include <string>

class ScavTrap:public  ClapTrap
{
  private:
  public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &ref);
    ScavTrap&operator=(const ScavTrap &ref);

    void guardGate();
};
