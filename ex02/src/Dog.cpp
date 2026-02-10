#include "Dog.hpp"
#include "colors.hpp"
#include <iostream>

Dog::Dog() : AAnimal("Dog")
{
	std::cout << GREEN << "Dog Default Constructor Called\n" << RESET;
}

Dog::Dog(const std::string& type) : AAnimal(type)
{
	std::cout << GREEN << "Dog Type Constructor Called\n" RESET;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	std::cout << YELLOW << "Dog Copy Constructor Called\n" << RESET;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << BRIGHT_GREEN << "Dog Assignment Operator Called\n" << RESET;
	type_ = other.type_;
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "Dog Destructor Called\n" << RESET;
}

void Dog::makeSound() const
{
	std::cout << type_ << " Barks\n";
}