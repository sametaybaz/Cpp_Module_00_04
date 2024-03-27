
#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{	
	std::cout << "Animal default contructor worked with " << this->type  << " type" << std::endl;
}

AAnimal::AAnimal(std::string newType) : type(newType)
{
	std::cout << "Animal parameter contructor worked with " << this->type << " type" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
	*this = animal;
	std::cout << "Animal Copy contructor worked with " << this->type << " type" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
    this->type = animal.getType();
    return *this;
}

AAnimal::~AAnimal(void)
{
   std::cout << "Animal destructor called" << std::endl;
}
