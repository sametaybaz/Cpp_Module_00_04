#include "HumanA.hpp"

HumanA::HumanA(std::string name_param,Weapon &weaponRef): 
        name(name_param),
        weapon(weaponRef)
{
}

HumanA::~HumanA()
{ 

}

void HumanA::attack()
{ 
    std::cout << this->name + " attacks with their " + this->weapon.getType() << std::endl;
}