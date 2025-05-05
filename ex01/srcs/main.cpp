#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <climits>
#include <cmath>
#include <iostream>

int main()
{

  std::cout << "\n\033[7m####################### BASIC TESTS #######################\033[0m\n\n";
  ScavTrap scavy("Scavy01");
  ClapTrap clappy("Clappy00");
  std::cout << (char)0xa;
  scavy.attack("someone");
  scavy.guardGate();
  scavy.beRepaired(1);
  scavy.takeDamage(102);
  scavy.attack("someone else");



  std::cout << "\n\033[7m###################### OVERFLOW/UNDERFLOW CHECK #######################\033[0m\n\n";
  ScavTrap scavy0("Scavy00");
  ClapTrap clappy0("Clappy01");
  std::cout << (char)0xa;
  scavy0.beRepaired(4294967295);
  scavy0.beRepaired(4294967194);
  scavy0.takeDamage(4294967295);


  std::cout << "\n\033[7m###################### NOT ENOUGH EP #######################\033[0m\n\n";
  ScavTrap hds("Scavy01 the hard working guy");
  std::cout << (char)0xa;
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.beRepaired(1);
  hds.attack("someone");
  std::cout << (char)0xa;
  std::cout << (char)0xa;
}
