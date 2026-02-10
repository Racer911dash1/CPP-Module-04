#include "WrongAnimal.hpp"
#include "colors.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "WrongAnimal Default Constructor Called\n" RESET;
}

WrongAnimal::WrongAnimal(const std::string& type) : type_(type)
{
	std::cout << GREEN << "WrongAnimal Type Constructor Called\n" RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type_(other.type_)
{
	std::cout << YELLOW << "WrongAnimal Copy Constructor Called\n" RESET;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << BRIGHT_GREEN << "WrongAnimal Assignment Operator Called\n" RESET;
	type_ = other.type_;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal Destructor Called\n" RESET;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal Noises*\n";
}

const std::string& WrongAnimal::getType() const
{
	return type_;
}