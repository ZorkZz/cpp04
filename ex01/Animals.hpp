#ifndef ANIMALS_HPP

# define ANIMALS_HPP

# include <iostream>
# include <cstring>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &animal);
		Animal &operator = (const Animal &animal);
		virtual ~Animal();
		virtual void		makeSound() const;
		std::string			getType() const;

	protected:
		std::string	_type;
};

std::ostream &operator<<(std::ostream &os, const Animal &animal);

#endif
