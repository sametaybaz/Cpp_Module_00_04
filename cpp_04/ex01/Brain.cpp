#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea";
	std::cout << "Brain has been constructed and filled with ideas\n";
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "Brain has been destroyed\n";
}

Brain::Brain(Brain &ref)
{	
	*this = ref;
	std::cout << "Brain copy constructed worked\n";
}

Brain & Brain::operator=(Brain  & rhs)
{	
	
	std::string *rhs_ideas = rhs.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs_ideas[i];

	std::cout << "Brain operator= worked" << std::endl;

	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}