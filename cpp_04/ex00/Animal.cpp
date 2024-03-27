
#include "Animal.hpp"

Animal::Animal() : type("Animal")
{	
	std::cout << "Animal default contructor worked with " << this->type  << " type" << std::endl;
}

Animal::Animal(std::string newType) : type(newType)
{
	std::cout << "Animal parameter contructor worked with " << this->type << " type" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal Copy contructor worked with " << this->type << " type" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal& Animal::operator=(const Animal& animal)
{
    this->type = animal.getType();
    return *this;
}

void	Animal::makeSound() const
{	
	std::cout << "<Animal sound could not be identified.>" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}