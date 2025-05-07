#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <climits>
#include <cmath>
#include <iostream>

int main()
{

  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";
  ScavTrap scavy("Scavy00");
  ClapTrap clappy("Clappy00");
  FragTrap fraggy("Fraggy00");


  std::cout << "\n\033[1;97m##### BASIC TESTS #####\033[0m\n\n";
  std::cout << (char)0xa;
  clappy.attack("someone");
  scavy.attack("someone");
  fraggy.highFiveGuys();
  fraggy.beRepaired(1);
  fraggy.takeDamage(102);
  fraggy.attack("someone else");



  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";
  ScavTrap scavy01("Scavy01");
  ClapTrap clappy01("Clappy01");
  FragTrap fraggy01("Fraggy01");
  std::cout << (char)0xa;


  std::cout << "\n\033[1;95m##### OVERFLOW/UNDERFLOW tests #####\033[0m\n\n";
  fraggy01.beRepaired(4294967295);
  fraggy01.beRepaired(4294967194);
  fraggy01.takeDamage(4294967295);


  std::cout << "\n\033[1;91m##### DESTRUCTORS #####\033[0m\n\n";

}
