#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(std::string type): AAnimal(type)
{
	_brain = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &dog): AAnimal(dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = dog;
	delete this->_brain;
	this->_brain = new Brain(*dog._brain);
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "Copy assignement Dog" << std::endl;
	if (this != &dog)
	{
		this->_brain = new Brain(*dog._brain);
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

void	Dog::set_idea(size_t index, std::string idea)
{
	this->_brain->set_idea(index, idea);
}

std::string	Dog::get_idea(size_t index) const
{
	return (this->get_idea(index));
}

void	Dog::show_all_idea(void) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->_brain->get_idea(i) << std::endl;
	}
}
