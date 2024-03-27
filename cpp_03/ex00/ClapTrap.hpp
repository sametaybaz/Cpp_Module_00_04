
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap { 

	private:
		std::string	name;
		unsigned int hit_point;
		unsigned int energy_point;
		unsigned int attack_damage;

	public:
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap& claptrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif