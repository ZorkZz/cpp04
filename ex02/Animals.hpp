#ifndef ANIMALS_HPP

# define ANIMALS_HPP

# include <iostream>
# include <cstring>
# include <string>

class Animal
{
	public:
		virtual ~Animal();
		virtual void		makeSound() const;
		std::string			getType() const;

	protected:
		Animal();
		std::string	_type;
};

#endif
