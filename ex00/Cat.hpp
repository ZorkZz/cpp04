#ifndef CAT_HPP

# define CAT_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "Animals.hpp"

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		virtual void		makeSound() const;
};

#endif
