#include "Animals.hpp"

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = animal;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal type constructor" << std::endl;
}

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal Constructor" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	std::cout << "Copy assignement operator for Animal" << std::endl;
	if (this != &animal)
		this->_type = animal._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Make Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

