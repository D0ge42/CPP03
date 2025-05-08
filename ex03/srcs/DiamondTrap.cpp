#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap():ScavTrap(),FragTrap()
{
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
  std::cout << "\033[1;95mDiamondTrap: \033[0m" << this->_name << " created\n";
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),ScavTrap(),FragTrap(), _name(name)
{
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
  std::cout << "\033[1;95mDiamondTrap: \033[0m" << this->_name << " created\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref)
{
  std::cout << "DiamondTrap Copy assignment opearator called\n";
  if (this != &ref)
  {
    this->_name = ref._name;
    this->_energyPoints = ref._energyPoints;
    this->_hitPoints= ref._hitPoints;
    this->_attackDamage = ref._attackDamage;
  }
  return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref):ClapTrap(ref),ScavTrap(ref),FragTrap(ref)
{
  *this = ref;
  std:: cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "\033[1;91mDiamondTrap: " << this->_name << " destroyed \033[0m\n";
}

void DiamondTrap::whoAmI()
{
  std::cout << "DiamondTrap: My name is " << this->_name << " and my grandfather name is " << ClapTrap::_name << std::endl;
}

unsigned int DiamondTrap::getEp()
{
  return this->_energyPoints;
}


unsigned int DiamondTrap::getAd()
{
  return this->_attackDamage;
}

unsigned DiamondTrap::getHp()
{
  return this->_hitPoints;
}

std::string DiamondTrap::getName()
{
  return this->_name;
}
