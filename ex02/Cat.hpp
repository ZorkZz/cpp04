#ifndef CAT_HPP

# define CAT_HPP

# include <iostream>
# include <cstring>
# include <string>
# include "AAnimals.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		virtual ~Cat();
		virtual void		makeSound() const;
		void	set_idea(size_t index, std::string idea);
		std::string	get_idea(size_t index) const;
		void	show_all_idea(void) const;
	
	private:
		Brain *_brain;
};

#endif
