#include "AAnimals.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;
	
	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Cat tests" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;

	Cat	cat1;
	Cat	cat2("cat2");
	Cat	cat3(cat1);

	cat1.show_all_idea();
	std::cout << "--------------------------------------------------" << std::endl;
	cat1.set_idea(25, "ouaf ouaf");
	cat1.set_idea(50, "ouef ouef");
	cat1.set_idea(75, "ouif ouif");
	cat1.show_all_idea();

	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Dog tests" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;

	Dog	dog1;
	Dog	dog2("dog2");
	Dog	dog3(dog1);

	dog1.show_all_idea();
	std::cout << "--------------------------------------------------" << std::endl;
	dog1.set_idea(25, "arf arf");
	dog1.set_idea(50, "erf erf");
	dog1.set_idea(75, "irf irf");
	dog1.show_all_idea();

	return 0;
}