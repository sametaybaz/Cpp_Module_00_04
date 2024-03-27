
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
    std::cout << this->name << " ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << this->name << " ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
    *this = scavtrap;
    std::cout << this->name << " ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &scavtrap)
{
    this->name = scavtrap.name;
    this->hit_point = scavtrap.hit_point;
    this->energy_point = scavtrap.energy_point;
    this->attack_damage = scavtrap.attack_damage;
	std::cout << this->name << " ScavTrap assignation operator called" << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{	
	if (this->hit_point != 0)
    	std::cout << "ScavTrap " << this->name << " used guardGate mode" << std::endl;
	else if (this->hit_point == 0)
		std::cout << "ScavTrap " << this->name << " is died that's why can't use guardGate mode" << std::endl;
}


void ScavTrap::attack(const std::string &target)
{	
	if ((this->energy_point == 0) || (this->hit_point == 0))
	{ 
		std::cout << "ScavTrap " << this->name << " cannot attack" << std::endl;
	}
	else 
	{ 
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point -= 1;
	}
		
}