#pragma once
#include "ClapTrap.hpp"
#include <string>

class ScavTrap: virtual public  ClapTrap
{
  private:
  public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &ref);
    ScavTrap&operator=(const ScavTrap &ref);

    virtual void attack(const std::string &target);
    void guardGate();


    unsigned int getAd()const;
    unsigned int getHp()const;
    unsigned int getEp()const;
    std::string getName()const;
};
