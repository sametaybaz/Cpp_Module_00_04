#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat)
{ 	
	*this = cat;
	std::cout << "Cat copy contructor worked with " << this->type << " type" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{	
	this->type = cat.type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}