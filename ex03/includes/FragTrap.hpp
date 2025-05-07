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
};
