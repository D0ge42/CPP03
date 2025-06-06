#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap():ClapTrap()
{
  std::cout << "\033[1;96mScavTrap: \033[0m created.\n";
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}


ScavTrap::ScavTrap(std::string name): ClapTrap()
{
  std::cout << "\033[1;96mScavTrap: \033[0m" << name << "created.";
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;

}

void ScavTrap::attack(const std::string &target)
{

  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    std::cout << "\033[1;96mScavTrap: " << this->_name << "\033[0m" << " attacks " << target << " causing " << this->getAd() << " points of damage !" << (char)0xa;
    this->_energyPoints--;
  }
  else if (this->_hitPoints == 0)
    std::cout << "\033[1;96m" << this->getName() << "\033[0m" << " is dead. Let it rest in peace." << (char)0xa;
  else if (this->_energyPoints == 0)
    std::cout << "\033[1;96m" << this->getName() << "\033[0m needs some rest before performing any action" << (char)0xa;
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
  std::cout << "\033[1;96mScavTrap: "  << this->_name << "\033[0m" << " is  now in gatekeeper mode 🛡️ \n";
}

unsigned int ScavTrap::getAd() const
{
  return this->_attackDamage;
}

unsigned int ScavTrap::getEp() const
{
  return this->_energyPoints;
}
unsigned int ScavTrap::getHp() const
{
  return this->_hitPoints;
}

std::string ScavTrap::getName() const
{
  return this->_name;
}
