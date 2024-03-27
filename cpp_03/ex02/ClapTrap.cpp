
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{ 
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << this->name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " ClapTap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << this->name << " ClapTrap copy constructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& claptrap)
{
    this->name = claptrap.name;
    this->hit_point = claptrap.hit_point;
    this->energy_point = claptrap.energy_point;
    this->attack_damage = claptrap.attack_damage;
	std::cout << this->name << " ClapTrap assignation operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{	
	if ((this->energy_point == 0) || (this->hit_point == 0))
	{ 
		std::cout << "ClapTrap " << this->name << " cannot attack" << std::endl;
	}
	else 
	{ 
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point -= 1;
	}
		
}

void ClapTrap::takeDamage(unsigned int amount)
{ 
	if ((this->hit_point > amount) && (this->hit_point != 0))
	{
		std::cout << this->name << " takes " << amount << " damage!" << std::endl;
		this->hit_point -= amount;
	} 
	
	else if (this->hit_point == 0 || this->hit_point <= amount) 
	{ 
		std::cout << this->name << " is dead!" << std::endl;
		this->hit_point = 0;
		this->energy_point = 0;
	}
}


void ClapTrap::beRepaired(unsigned int amount)
{ 
	if (this->hit_point == 0 || this->energy_point == 0)
	{	
		std::cout << this->name << " cannot be repaired" << std::endl;
	}
	else 
	{	
		std::cout << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
		this->energy_point -= 1;
		this->hit_point += amount;
	}

}
