#include "Dog.hpp"
#include "colors.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), brain_(new Brain())
{
	std::cout << GREEN << "Dog Default Constructor Called\n" << RESET;
}

Dog::Dog(const std::string& type) : Animal(type), brain_(new Brain())
{
	std::cout << GREEN << "Dog Type Constructor Called\n" RESET;
}

Dog::Dog(const Dog& other) : Animal(other), brain_(new Brain(*other.brain_))
{
	std::cout << YELLOW << "Dog Copy Constructor Called\n" << RESET;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << BRIGHT_GREEN << "Dog Assignment Operator Called\n" << RESET;
	if (this == &other)
	{
		return *this;
	}
	type_ = other.type_;
	delete brain_;
	brain_ = new Brain(*other.brain_);
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "Dog Destructor Called\n" << RESET;
	delete brain_;
	brain_ = nullptr;
}

void Dog::makeSound() const
{
	std::cout << type_ << " Barks\n";
}

const Brain& Dog::getBrain() const
{
	return *brain_;
}

Brain& Dog::getBrain()
{
	return *brain_;
}