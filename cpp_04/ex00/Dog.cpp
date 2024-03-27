#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{	
	std::cout << "Dog constructer worked with "  << this->type << " type" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{ 	
	*this = dog;
	std::cout << "Dog copy contructor worked with " << this->type << " type" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{	
	this->type = dog.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog() 
{ 
	std::cout << this->type << " destroyed" << std::endl;
}