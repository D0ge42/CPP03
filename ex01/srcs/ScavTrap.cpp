#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap():ClapTrap()
{
  std::cout << "ScavTrap: created.\n";
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}


ScavTrap::ScavTrap(std::string name): ClapTrap()
{
  std::cout << "\033[1;96mScavTrap: \033[0m" << name << " created\n";
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;

}

ScavTrap& ScavTrap::operator=(const ScavTrap &ref)
{
  std::cout << "ScavTrap Copy assignment opearator called\n";
  if (this != &ref)
  {
    this->_name = ref.getName();
    this->_energyPoints = ref._energyPoints;
    this->_hitPoints= ref._hitPoints;
    this->_attackDamage = ref._attackDamage;
  }
  return *this;
}

ScavTrap::ScavTrap(const ScavTrap &ref):ClapTrap(ref)
{
  *this = ref;
  std:: cout << "DiamondTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "\033[1;91mScavTrap: " << this->getName() << " destroyed\033[0m\n";
}

void ScavTrap::guardGate()
{
  std::cout << "\033[1;96mScavTrap: "  << this->getName() << "\033[0m" << " is  now in gatekeeper mode 🛡️ \n";
}
