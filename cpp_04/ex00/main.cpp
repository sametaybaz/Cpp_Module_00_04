
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::string test;
	std::cout << "Do you want see wrong sounds and destructor problem with Wrong Classes => type yes" << std::endl;
	std::cin >> test;
	std::cout << std::endl;

	if (test == "yes")
	{
		std::cout << "-----wrong animal classes testing -------" << std::endl;

		const WrongAnimal *wrongCat = new WrongCat();

		std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
		
		wrongCat->makeSound();

		delete wrongCat;
	}

	return (0);
}
