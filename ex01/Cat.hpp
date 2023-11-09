#ifndef CAT_HPP

# define CAT_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "Animals.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		virtual ~Cat();
		virtual void		makeSound() const;
	
	private:
		Brain *_brain;
};

#endif
