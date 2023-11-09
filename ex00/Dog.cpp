#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "Copy assignement Cat" << std::endl;
	if (this != &dog)
		this->_type = dog._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Make Dog Sound" << std::endl;
}
