#include "Animals.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal	*wronganimal = new WrongAnimal();
	const WrongCat	*wrongcat = new WrongCat();

	std::cout << std::endl;


	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << wronganimal->getType() << " " << std::endl;
	wrongcat->makeSound();
	wronganimal->makeSound();

	std::cout << std::endl;


	delete wronganimal;
	delete wrongcat;
	delete meta;
	delete j;
	delete i;

	return 0;
}