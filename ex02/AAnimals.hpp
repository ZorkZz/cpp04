#ifndef AANIMALS_HPP

# define AANIMALS_HPP

# include <iostream>
# include <cstring>
# include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		AAnimal &operator = (const AAnimal &animal);
		virtual ~AAnimal();
		virtual void		makeSound() const = 0;
		std::string			getType() const;

	protected:
		std::string	_type;
};

#endif
