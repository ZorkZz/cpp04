#include "Brain.hpp"

Brain::Brain()
{
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
	if (this != &brain)
	{
		for (size_t i = 0; i < brain.ideas->size(); i++)
		{
			this->ideas[i] = brain.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}
