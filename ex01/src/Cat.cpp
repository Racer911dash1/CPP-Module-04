#include "Cat.hpp"
#include "colors.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), brain_(new Brain())
{
	std::cout << GREEN << "Cat Default Constructor Called\n" << RESET;
}

Cat::Cat(const std::string& type) : Animal(type), brain_(new Brain())
{
	std::cout << GREEN << "Cat Type Constructor Called\n" RESET;
}

Cat::Cat(const Cat& other) : Animal(other), brain_(new Brain(*other.brain_))
{
	std::cout << YELLOW << "Cat Copy Constructor Called\n" << RESET;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << BRIGHT_GREEN << "Cat Assignment Operator Called\n" << RESET;
	if (this == &other)
	{
		return *this;
	}
	type_ = other.type_;
	delete brain_;
	brain_ = new Brain(*other.brain_);
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "Cat Destructor Called\n" << RESET;
	delete brain_;
	brain_ = nullptr;
}

void Cat::makeSound() const
{
	std::cout << type_ << " Meows\n";
}

const Brain& Cat::getBrain() const
{
	return *brain_;
}

Brain& Cat::getBrain()
{
	return *brain_;
}