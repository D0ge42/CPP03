#pragma once
#include <string>

class ClapTrap
{
  private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

 // Orthodox canonical form
  public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &ref);
    ClapTrap&operator=(const ClapTrap &ref);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Getters and Setters

    unsigned int getAd()const;
    unsigned int getHp()const;
    unsigned int getEp()const;
    std::string getName()const;

};
