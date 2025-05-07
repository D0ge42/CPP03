#include "ClapTrap.hpp"
#include <climits>
#include <cmath>
#include <iostream>

int main()
{

  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";
  ClapTrap clap0("Clappo The clapper");

  std::cout << "\n\033[1;95m##### OVERFLOW/UNDERFLOW tests #####\033[0m\n\n";
  clap0.beRepaired(4294967284);
  clap0.beRepaired(10);
  clap0.takeDamage(11);
  clap0.takeDamage(4294967284);
  std::cout << "\n\n";

  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";
  ClapTrap clap1("Clapperon de Clapperonis");
  std::cout << "\n\033[1;95m##### No energy points left test #####\033[0m\n\n";
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.beRepaired(10);
  clap1.attack("");

  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";
  ClapTrap clap2("The mighty clapper");

  std::cout << "\n\033[1;97m### NORMAL TEST ###\033[0m\n\n";
  clap2.takeDamage(1);
  clap2.beRepaired(1);
  clap2.attack("himself");


  std::cout << "\n\033[1;91m##### DESTRUCTORS #####\033[0m\n\n";
}
