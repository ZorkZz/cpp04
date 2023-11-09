#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "AAnimals.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		virtual ~Dog();
		virtual void		makeSound() const;

	private:
		Brain *_brain;
};

#endif
