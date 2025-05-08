#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap():ClapTrap()
{
  std::cout << "\033[1;93mFragTrap: \033[0mcreated.\n";
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}


FragTrap::FragTrap(std::string name): ClapTrap()
{
  std::cout << "\033[1;93mFragTrap:\033[0m " << name << " created.";
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}


FragTrap& FragTrap::operator=(const FragTrap &ref)
{
  std::cout << "FragTrap Copy assignment opearator called\n";
  if (this != &ref)
  {
    this->_name = ref.getName();
    this->_energyPoints = ref._energyPoints;
    this->_hitPoints= ref._hitPoints;
    this->_attackDamage = ref._attackDamage;
  }
  return *this;
}

FragTrap::FragTrap(const FragTrap &ref):ClapTrap(ref)
{
  *this = ref;
  std:: cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "\033[1;91mFragTrap: "<< this->getName() << " destroyed\033[0m\n";
}

void FragTrap::highFiveGuys()
{
  std::cout << "\033[1;93mFragTrap: " << this->getName() << "\033[0m highfive you!\n";
}

unsigned int FragTrap::getAd() const
{
  return this->_attackDamage;
}

unsigned int FragTrap::getEp() const
{
  return this->_energyPoints;
}
unsigned int FragTrap::getHp() const
{
  return this->_hitPoints;
}

std::string FragTrap::getName() const
{
  return this->_name;
}
