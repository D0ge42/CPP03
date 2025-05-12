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
  DiamondTrap diamond1 = diamond;

  std::cout << "\n\033[1;97m##### COPY CONSTRUCTOR STATS #####\033[0m\n\n";
  std::cout << "d1 stats: " << diamond1.getAd() << std::endl;
  std::cout << "d0 stats: " << diamond.getAd() << std::endl;
  std::cout << "d1 stats: " << diamond1.getBaseEp() << std::endl;
  std::cout << "d0 stats: " << diamond.getBaseEp() << std::endl;
  std::cout << "d1 stats: " << diamond1.getName() << std::endl;
  std::cout << "d0 stats: " << diamond.getName() << std::endl;

  std::cout << "\n\033[1;97m##### BASIC TEST #####\033[0m\n\n";
  std::cout << (char)0xa;
  diamond.whoAmI();
  diamond.guardGate();
  diamond.highFiveGuys();
  diamond.attack("someone");



  std::cout << "\n\033[1;91m##### FINAL DESTRUCTION TEST #####\033[0m\n\n";

  std::cout << "\n\033[1;92m##### CONSTRUCTORS #####\033[0m\n\n";

  DiamondTrap diam("diam");
  std::cout << (char)0xa;
  FragTrap frag("frag");
  std::cout << (char)0xa;
  ScavTrap scav("scav");
  std::cout << (char)0xa;
  ClapTrap clap("clap");


  std::cout << "\n\033[1;91m##### ATTACK #####\033[0m\n\n";
  diam.attack("HIMSELF");
  frag.attack("HIMSELF");
  scav.attack("HIMSELF");
  clap.attack("HIMSELF");


  std::cout << "\n\033[1;92m##### HEAL #####\033[0m\n\n";
  diam.beRepaired(1);
  frag.beRepaired(1);
  scav.beRepaired(1);
  clap.beRepaired(1);


  std::cout << "\n\033[1;93m##### TAKE DAMAGE #####\033[0m\n\n";
  diam.takeDamage(1);
  frag.takeDamage(1);
  scav.takeDamage(1);
  clap.takeDamage(1);


  std::cout << "\n\033[1;95m##### SPECIAL MOVES #####\033[0m\n\n";
  diam.highFiveGuys();
  diam.whoAmI();
  diam.guardGate();
  frag.highFiveGuys();
  scav.guardGate();


  std::cout << "\n\033[1;96m##### OVERFLOW/UNDERFLOW #####\033[0m\n\n";

  diam.takeDamage(4294967295);
  frag.takeDamage(4294967295);
  scav.takeDamage(4294967295);
  clap.takeDamage(4294967295);

  std::cout << "\n\033[1;91m##### DESTRUCTORS #####\033[0m\n\n";

}
