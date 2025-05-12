#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
  private:
    std::string _name;
  public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &ref);
    DiamondTrap&operator=(const DiamondTrap &ref);

    void whoAmI();
    unsigned int getAd();
    unsigned int getHp();
    unsigned int getEp();
    unsigned int getBaseEp();
    std::string getName();
};
