#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat): WrongAnimal(WrongCat)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
	*this = WrongCat;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat)
{
	std::cout << "Copy assignement WrongCat" << std::endl;
	if (this != &WrongCat)
		this->_type = WrongCat._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Make WrongCat Sound" << std::endl;
}
