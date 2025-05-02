#include "ClapTrap.hpp"
#include <climits>
#include <cmath>

int main()
{
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
  clap0.takeDamage(4294967283);
}
