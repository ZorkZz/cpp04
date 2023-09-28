#include "Animals.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal Constructor" << std::endl;
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
