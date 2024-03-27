#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{	
	this->brain = new Brain();
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
	this->brain = new Brain(*(dog.getBrain()));
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog() 
{ 	
	delete this->brain;
	std::cout << this->type << " destroyed" << std::endl;
}


Brain *Dog::getBrain() const
{
	return (this->brain);
}