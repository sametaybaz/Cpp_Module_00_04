#ifndef  WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
		WrongCat(const WrongCat &cat);
		WrongCat &operator=(const WrongCat &cat);
};

#endif