#include "AAnimals.hpp"

AAnimal::AAnimal()
{
	_type = "AAnimal";
	std::cout << "AAnimal Constructor" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "Animal type constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = animal;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	std::cout << "Copy assignement operator for AAnimal" << std::endl;
	if (this != &animal)
		this->_type = animal._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "Make AAnimal Sound" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}
