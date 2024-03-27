
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal")
{	
	std::cout << "Wrong Animal default contructor worked with " << this->type  << " type" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType) : type(newType)
{
	std::cout << "Wrong Animal parameter contructor worked with " << this->type << " type" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
	std::cout << "WrongAnimal Copy contructor worked with " << this->type << " type" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
    this->type = animal.getType();
    return *this;
}

void	WrongAnimal::makeSound() const
{	
	std::cout << "<Animal sound could not be identified.>" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}