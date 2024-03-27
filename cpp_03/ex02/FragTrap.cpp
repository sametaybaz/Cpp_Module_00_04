
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << this->name << " FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << this->name << " FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap(fragtrap)
{
    *this = fragtrap;
    std::cout << this->name << " FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
    this->name = fragtrap.name;
    this->hit_point = fragtrap.hit_point;
    this->energy_point = fragtrap.energy_point;
    this->attack_damage = fragtrap.attack_damage;
    std::cout << this->name << " FragTrap assignation operator called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{	
	if (this->hit_point != 0)
    	std::cout << "FragTrap " << this->name << " gives you a high five" << std::endl;
	else if (this->hit_point == 0)
		std::cout << "FragTrap " << this->name << " can't gives you a high five because died" << std::endl;
}

void FragTrap::attack(const std::string &target)
{	
	if ((this->energy_point == 0) || (this->hit_point == 0))
	{ 
		std::cout << "FragTrap " << this->name << " cannot attack" << std::endl;
	}
	else 
	{ 
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point -= 1;
	}
		
}