#include "AAnimals.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Dog	*j = new Dog();
	const Cat	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	return 0;
}