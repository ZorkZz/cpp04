#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &WrongCat);
		WrongCat &operator=(const WrongCat &WrongCat);
		virtual ~WrongCat();
		virtual void		makeSound() const;
};

#endif
