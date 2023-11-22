#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "Animals.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		virtual ~Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		virtual void		makeSound() const;
		void	set_idea(size_t index, std::string idea);
		std::string	get_idea(size_t index) const;
		void	show_all_idea(void) const;

	private:
		Brain *_brain;
};

#endif
