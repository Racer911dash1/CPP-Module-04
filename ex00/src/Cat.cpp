#include "Cat.hpp"
#include "colors.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << GREEN << "Cat Default Constructor Called\n" << RESET;
}

Cat::Cat(const std::string& type) : Animal(type)
{
	std::cout << GREEN << "Cat Type Constructor Called\n" RESET;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << YELLOW << "Cat Copy Constructor Called\n" << RESET;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << BRIGHT_GREEN << "Cat Assignment Operator Called\n" << RESET;
	type_ = other.type_;
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "Cat Destructor Called\n" << RESET;
}

void Cat::makeSound() const
{
	std::cout << type_ << " Meows\n";
}