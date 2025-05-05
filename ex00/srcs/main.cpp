#include "ClapTrap.hpp"
#include <climits>
#include <cmath>
#include <iostream>

int main()
{
  std::cout << "\n\033[7m### OVERFLOW/UNDERFLOW CHECK ###\033[0m\n\n";
  ClapTrap clap0("Clappo The clapper");
  clap0.attack("Another Clappo");
  clap0.attack("Another Clappo");
  clap0.attack("Another Clappo");
  clap0.attack("Another Clappo");
  clap0.attack("Another Clappo");
  clap0.attack("Another Clappo");
  clap0.attack("Another Clappo");
  clap0.beRepaired(4294967284);
  clap0.beRepaired(10);
  clap0.takeDamage(11);
  clap0.takeDamage(4294967284);
  std::cout << "\n\n";

  std::cout << "\n\033[7m### ENERGY POINT CHECK ###\033[0m\n\n";
  ClapTrap clap1("Clapperon de Clapperonis");
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

  std::cout << "\n\033[7m### NORMAL TEST ###\033[0m\n\n";
  ClapTrap clap2("The mighty clapper");
  clap2.takeDamage(1);
  clap2.beRepaired(1);
  clap2.attack("himself");
}
