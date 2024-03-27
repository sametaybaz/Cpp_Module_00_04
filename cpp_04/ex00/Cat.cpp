
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{	
	std::cout << "Cat constructer worked with "  << this->type << " type" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{ 	
	*this = cat;
	std::cout << "Cat copy contructor worked with " << this->type << " type" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{	
	this->type = cat.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}

Cat::~Cat() 
{ 
	std::cout << this->type << " destroyed" << std::endl;
}