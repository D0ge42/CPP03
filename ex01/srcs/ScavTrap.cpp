#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap():ClapTrap()
{
  std::cout << "ScavTrap created.\n\n";
}


ScavTrap::ScavTrap(std::string name): ClapTrap()
{
  std::cout << "ScavTrap created. It's name is " << name + '\n';
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;

}

void ScavTrap::attack(const std::string &target)
{

  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    std::cout  << this->getName() << " attacks " << target << " causing " << this->getAd() << " points of damage !" << (char)0xa;
    this->_energyPoints--;
  }
  else if (this->_hitPoints == 0)
    std::cout << this->getName() << " is dead. Let it rest in peace." << (char)0xa;
  else if (this->_energyPoints == 0)
    std::cout << this->getName() << " needs some rest before performing any action" << (char)0xa;
}

ScavTrap::~ScavTrap()
{
  std::cout << this->getName() << " gives up\n";
}

void ScavTrap::guardGate()
{
  std::cout << "🛡️  " << this->getName() << " is  now in gatekeeper mode 🛡️ \n";
}
