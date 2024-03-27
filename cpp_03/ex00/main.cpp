#include "ClapTrap.hpp"

int main()
{ 

	ClapTrap user1("Samet");
    ClapTrap user2("Bob");

    user1.attack("Bob"); 
    user2.takeDamage(9); 
    user2.beRepaired(3); 

	user1.attack("Bob"); 
	user2.takeDamage(4);

	user2.attack("Samet");
	user2.beRepaired(10);

	return (0);
}

