#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap():ClapTrap()
{
  std::cout << "FragTrap created.\n\n";
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}


FragTrap::FragTrap(std::string name): ClapTrap()
{
  std::cout << "\033[1;93mFragTrap created. It's name is " << name <<
    "\033[0m\n";
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
  this->_name = ref._name;
  this->_attackDamage= ref._attackDamage;
  this->_energyPoints = ref._energyPoints;
  this->_hitPoints= ref._hitPoints;
  return *this;
}

FragTrap::FragTrap(const FragTrap &ref):ClapTrap(ref)
{
  *this = ref;
}

FragTrap::~FragTrap()
{
  std::cout << "\033[1;91mFragTrap: "<< this->getName() << " destroyed\033[0m\n";
}

void FragTrap::highFiveGuys()
{
  std::cout << "\033[1;93m" << this->getName() << "\033[0m highfive you!\n";
}


