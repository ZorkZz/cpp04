#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Make Dog Sound" << std::endl;
}
