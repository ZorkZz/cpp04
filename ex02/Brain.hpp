#ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		void	set_idea(size_t index, std::string idea);
		std::string	get_idea(size_t index) const;
		~Brain();

	private:
		std::string _ideas[100];
};

#endif