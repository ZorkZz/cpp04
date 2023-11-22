#include "Cat.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	_brain = new Brain;
	std::cout << "Cat type Constructor" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = cat;
	delete this->_brain;
	this->_brain = new Brain(*cat._brain);
}

Cat	&Cat::operator=(const Cat &cat)
{
	std::cout << "Copy assignement Cat" << std::endl;
	if (this != &cat)
	{
		this->_brain = new Brain(*cat._brain);
		this->_type = cat._type;
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

void	Cat::set_idea(size_t index, std::string idea)
{
	this->_brain->set_idea(index, idea);
}

std::string	Cat::get_idea(size_t index) const
{
	return (this->_brain->get_idea(index));
}

void	Cat::show_all_idea(void) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->_brain->get_idea(i) << std::endl;
	}
}
