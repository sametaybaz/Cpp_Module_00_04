#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Samet");
    ScavTrap scav2("Bob");
    ScavTrap scaav = scav;

    scav.attack("Bob");
    scav2.takeDamage(90);
    scav2.beRepaired(2);

	scaav.attack("Bob");
    scav2.guardGate();
	scav2.takeDamage(12);
	scav2.beRepaired(1);
	scav2.guardGate();
    
	return 0;
}