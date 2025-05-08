#pragma once
#include "ClapTrap.hpp"
#include <string>

class FragTrap: virtual public  ClapTrap
{
  private:
  public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &ref);
    FragTrap&operator=(const FragTrap &ref);

    void highFiveGuys();

    unsigned int getAd()const;
    unsigned int getHp()const;
    unsigned int getEp()const;
    std::string getName()const;
};
