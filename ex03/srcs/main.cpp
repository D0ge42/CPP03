#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <climits>
#include <cmath>
#include <iostream>

int main()
{

  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";
  DiamondTrap diamond("Diddy");


  std::cout << "\n\033[1;97m##### BASIC TEST #####\033[0m\n\n";
  std::cout << (char)0xa;
  diamond.whoAmI();
  diamond.guardGate();
  diamond.highFiveGuys();
  diamond.attack("someone");

  std::cout << "\n\033[1;91m##### DESTRUCTORS #####\033[0m\n\n";

}
