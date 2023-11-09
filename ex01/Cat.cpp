#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
	std::cout << "Copy assignement Cat" << std::endl;
	if (this != &cat)
	{
		this->_type = cat._type;
		this->_brain = new Brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Make Cat Sound" << std::endl;
}
