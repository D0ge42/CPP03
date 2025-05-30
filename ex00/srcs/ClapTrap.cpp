#include "ClapTrap.hpp"
#include "ClapTrap.h"
#include <iostream>
#include <limits>
#include <sys/types.h>

ClapTrap::ClapTrap():_hitPoints(10),_energyPoints(10),_attackDamage(0) {
  std::cout << "\033[1;97mClapTrap created.\033[0m" << (char)0xa;
}

ClapTrap::~ClapTrap()
{
  std::cout << "\033[1;91mClapTrap: " << this->getName() <<  " destroyed.\033[0m" << (char)0xa;
}

ClapTrap::ClapTrap(std::string name):_name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
  std::cout << "\033[1;95mClapTrap: \033[0m" <<  this->getName() << " created and ready to smash" << (char)0xa;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
    this->_name = ref.getName();
    this->_hitPoints = ref.getHp();
    this->_energyPoints = ref.getEp();
    this->_attackDamage = ref.getAd();
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
  if (this->_energyPoints > 0 && this->_hitPoints > 0)
  {
    std::cout << "\033[1;97m" << this->getName() << "\033[0m" << " attacks " << target << " causing " << this->getAd() << " points of damage ! "  << (char)0xa;
    this->_energyPoints--;
  }
  else if (this->_hitPoints == 0)
    std::cout << "\033[1;97m" << this->getName() << "\033[0m" << " is dead. Let it rest in peace." << (char)0xa;
  else if (this->_energyPoints == 0)
    std::cout << "\033[1;97m" << this->getName() << "\033[0m" << " needs some rest before performing any action" << (char)0xa;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hitPoints > 0)
  {
    if (subtractionUnderflow(this->_hitPoints, amount) == true)
    {
      std::cout << "Potential Underflow detected\n";
      this->_hitPoints = 0;
    }
    else
      this->_hitPoints-=amount;
    std::cout <<  "\033[1;97m" << this->getName() << "\033[0m"<< " gets hit for " << amount << " damage. " << "Its hp are now: " << this->_hitPoints  << (char)0xa;
    if (this->_hitPoints == 0)
      std::cout << "\033[1;97m" << this->getName() << "\033[0m" << " has died. R.I.P homie " <<  (char)0xa;
  }
  else
    std::cout << "Stop. " << this->getName() << " is already dead. " << (char)0xa;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_energyPoints > 0)
  {
    if (additionOverflow(this->_hitPoints,amount) == true)
    {
      std::cout << "\033[30;44mYou can't go past 4294967295 HPs. This would be OP\033[0m " << (char)0xa;
      std::cout << "\033[30;44m!!!POTENTIAL UNSIGNED INT OVERFLOW!!!\033[0m" << (char)0xa;
      return;
    }
    std::cout  << "\033[1;97m" <<this->getName() << " \033[0mis repairing... " <<
      "It gains: " << amount << " HP " << "spending 1 EP " << (char)0xa << "\033[1;97m" << this->getName() << " \033[0mHPs are now " << this->_hitPoints + amount  << (char)0xa;
    this->_energyPoints--;
    this->_hitPoints+=amount;
  }
  else
    std::cout << "\033[1;97m" << this->getName() <<"\033[0m: Not enough energy points. Let this poor guy rests." << (char)0xa;
}


bool additionOverflow(unsigned int a,unsigned int b)
{
  return b > std::numeric_limits<unsigned int>::max()-a;
}

bool subtractionUnderflow(unsigned int a,unsigned int b)
{
  return b > std::numeric_limits<unsigned int>::min()+a;
}

// Const after function name:
// changes type of "this" from Foo* const into const Foo* const
// IN other words, const before a function name means that the
// return parameters is const.
// const after the function means that the function is part of a class
// and can't change any member of that class.
// Also const objects are only allowed to call these const functions.

unsigned int ClapTrap::getEp()const
{
  return this->_energyPoints;
}

unsigned int ClapTrap::getHp()const
{
  return this->_hitPoints;
}

unsigned int ClapTrap::getAd()const
{
  return this->_attackDamage;
}

std::string ClapTrap::getName()const
{
  return this->_name;
}
ClapTrap::ClapTrap(const ClapTrap &ref)
{
  *this = ref;
}
