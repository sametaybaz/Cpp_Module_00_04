
#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{	
	this->brain = new Brain();
	std::cout << "Cat constructer worked with "  << this->type << " type" << std::endl;
}


Cat::Cat(const Cat &cat) : AAnimal(cat)
{ 	
	*this = cat;
	std::cout << "Cat copy contructor worked with " << this->type << " type" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{	
	this->type = cat.type;
	this->brain = new Brain(*(cat.getBrain()));
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}

Cat::~Cat() 
{	
	delete this->brain;
	std::cout << this->type << " destroyed" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}