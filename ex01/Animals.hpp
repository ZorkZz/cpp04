#ifndef ANIMALS_HPP

# define ANIMALS_HPP

# include <iostream>
# include <cstring>
# include <string>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		virtual void		makeSound() const;
		std::string			getType() const;

	protected:
		std::string	_type;
};

#endif
