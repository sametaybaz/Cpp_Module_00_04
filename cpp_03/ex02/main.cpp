#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{	
	ClapTrap clap("Bob");

	ScavTrap scav("Ahmet");
    clap.attack("Ahmet");
    scav.takeDamage(90);
    scav.beRepaired(2);
	clap.attack("Ahmet");
    scav.guardGate();
	scav.takeDamage(12);

    FragTrap frag("Mehmet");
	frag.attack("Bob");
    clap.takeDamage(10);
    clap.beRepaired(1);
    frag.highFivesGuys();
	frag.beRepaired(100);
    
    return 0;
}