#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap():ClapTrap()
{
  std::cout << "\033[33;40mA WILD SCAVTRAP APPEARS\n\n\033[0m\n";
}


ScavTrap::ScavTrap(std::string name): ClapTrap()
{
  std::cout << "\033[33;40m" << name << " appears. It's a rare species of Scavtrap \n\033[0m";
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;

}

void ScavTrap::attack(const std::string &target)
{

  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    std::cout << "\033[33m" << this->getName() << " attacks " << target << " causing " << this->getAd() << " points of damage !\033[0m" << (char)0xa;
    this->_energyPoints--;
  }
  else if (this->_hitPoints == 0)
    std::cout << "\033[30;43m"<< this->getName() << " is dead. Let it rest in peace." << "\033[0m" << (char)0xa;
  else if (this->_energyPoints == 0)
    std::cout << "\033[033;40m" << this->getName() << " needs some rest before performing any action\033[0m" << (char)0xa;
}

ScavTrap::~ScavTrap()
{
  std::cout << "\033[31;40m" << this->getName() << " gives up\033[0m\n";
}

void ScavTrap::guardGate()
{
  std::cout << "🛡️   \033[40;37m" << this->getName() << " is  now in gatekeeper mode \033[0m 🛡️ \n";
}
