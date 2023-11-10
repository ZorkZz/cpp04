#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
	std::cout << "Copy assignement operator for WrongAnimal" << std::endl;
	if (this != &WrongAnimal)
		this->_type = WrongAnimal._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Make WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

