#ifndef WRONGANIMALS_HPP

# define WRONGANIMALS_HPP

# include <iostream>
# include <cstring>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(const WrongAnimal &WrongAnimal);
		WrongAnimal();
		WrongAnimal &operator = (const WrongAnimal &WrongAnimal);
		virtual ~WrongAnimal();
		void		makeSound() const;
		std::string			getType() const;

	protected:
		std::string	_type;
};

#endif
