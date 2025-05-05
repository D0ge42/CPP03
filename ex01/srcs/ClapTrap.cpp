#include "ClapTrap.hpp"
#include "ClapTrap.h"
#include <iostream>
#include <limits>
#include <sys/types.h>

ClapTrap::ClapTrap():_hitPoints(10),_energyPoints(10),_attackDamage(0) {
  std::cout << "\033[32;40mClapTrap created.\033[0m" << (char)0xa;
}

ClapTrap::~ClapTrap()
{

  std::cout << "\033[30;41mClapTrap destroyed.\033[0m" << (char)0xa;
}

ClapTrap::ClapTrap(std::string name):_name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0)
{
  std::cout << "\033[32;40mClapTrap: " <<  this->getName() << " created and ready to smash \033[0m " << (char)0xa;
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
    std::cout << "\033[33m" << this->getName() << " attacks " << target << " causing " << this->getAd() << " points of damage !\033[0m" << (char)0xa;
    this->_energyPoints--;
  }
  else if (this->_hitPoints == 0)
    std::cout << "\033[30;43m"<< this->getName() << " is dead. Let it rest in peace." << "\033[0m" << (char)0xa;
  else if (this->_energyPoints == 0)
    std::cout << "\033[033;40m" << this->getName() << " needs some rest before performing any action\033[0m" << (char)0xa;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hitPoints > 0)
  {
    if (subtractionUnderflow(this->_hitPoints, amount) == true)
    {
      std::cout << "\033[40mCritical hit\033[0m\n";
      this->_hitPoints = 0;
    }
    else
      this->_hitPoints-=amount;
    std::cout << "\033[31m" << this->getName() << " gets hit for " << amount << " damage. " << "Its hp are now: " << this->_hitPoints << "\033[0m" << (char)0xa;
    if (this->_hitPoints == 0)
      std::cout << "\033[41m" << this->getName() << " has died. R.I.P homie " << "\033[0m"<< (char)0xa;
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
    std::cout << "\033[32m" <<this->getName() << " is repairing... " <<
      "It gains: " << amount << " HP " << "spending 1 EP " << (char)0xa << this->getName() << " HPs are now " << this->_hitPoints + amount << "\033[0m" << (char)0xa;
    this->_energyPoints--;
    this->_hitPoints+=amount;
  }
  else
    std::cout << "\033[33;40mNot enough energy points. Let this poor guy rests.\033[0m" << (char)0xa;
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
