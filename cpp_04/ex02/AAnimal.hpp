
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal { 

	protected:
		std::string type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal(void);
		AAnimal	&operator=(const AAnimal &animal);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

};

#endif