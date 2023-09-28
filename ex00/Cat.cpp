#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Make Cat Sound" << std::endl;
}
