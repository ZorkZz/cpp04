#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &dog): AAnimal(dog)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "Copy assignement Cat" << std::endl;
	if (this != &dog)
	{
		this->_brain = new Brain;
		this->_type = dog._type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Make Dog Sound" << std::endl;
}
