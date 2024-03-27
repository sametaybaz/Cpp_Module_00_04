
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;

	std::string test_1;
	std::cout << "Do you want to see Animal Array has both of cat and dog objects=> type yes" << std::endl;
	std::cin >> test_1;

	if (test_1 == "yes")
	{
		Animal *Animals[10];

		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				Animals[i] = new Cat();
			else
				Animals[i] = new Dog();
		}

		for (int i = 0; i < 10; i++)
        	delete Animals[i];
	}

	std::string test_2;
	std::cout << "Do you want to see deep copy results as adresses of brain and ideas => type yes" << std::endl;
	std::cin >> test_2;

	if (test_2 == "yes")
	{
		std::cout << "*******Deep copy testing********" << std::endl;

		Cat cat;
		Cat cat_2(cat);

		std::cout << "Brain adresses " << std::endl;
		std::cout << "--------------" << std::endl;
		std::cout << cat.getBrain() << std::endl;
		std::cout << cat_2.getBrain() << std::endl;

		Brain *tmp = cat.getBrain();
		Brain *tmp_2 = cat_2.getBrain();

		std::string *idea_1 = tmp->getIdeas();
		std::string *idea_2 = tmp_2->getIdeas();

		idea_1[0] = "idea samet";
		idea_2[0] = "idea aybaz";

		std::cout << "Brain's idea adresses " << std::endl;
		std::cout << "---------------------" << std::endl;
		std::cout << &idea_1[0] << std::endl;
		std::cout << &idea_2[0] << std::endl;
											
		std::cout << idea_1[0] << std::endl;
		std::cout << idea_2[0] << std::endl;
	}

	return 0;
}

