#include "WrongCat.hpp"
#include "colors.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat Default Constructor Called\n" << RESET;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
	std::cout << GREEN << "WrongCat Type Constructor Called\n" RESET;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << YELLOW << "WrongCat Copy Constructor Called\n" << RESET;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << BRIGHT_GREEN << "WrongCat Assignment Operator Called\n" << RESET;
	type_ = other.type_;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat Destructor Called\n" << RESET;
}

void WrongCat::makeSound() const
{
	std::cout << type_ << " Meows\n";
}