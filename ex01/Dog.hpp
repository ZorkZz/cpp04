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
		virtual ~Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		virtual void		makeSound() const;

	private:
		Brain *_brain;
};

#endif
