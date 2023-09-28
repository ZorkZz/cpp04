#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "Animals.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		virtual void		makeSound() const;
};

#endif
