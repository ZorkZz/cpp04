#include "Brain.hpp"

Brain::Brain()
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = "one idea";
	}
	
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Copy assignement Brain" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

void	Brain::set_idea(size_t index, std::string idea)
{
	if (index < 100)
	{
		_ideas[index] = idea;
		return ;
	}
	std::cout << "index error" << std::endl;
}

std::string	Brain::get_idea(size_t index) const
{
	if (index < 100)
		return(this->_ideas[index]);
	return (NULL);
}
