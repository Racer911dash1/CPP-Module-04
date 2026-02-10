#include "AAnimal.hpp"
#include "colors.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	std::cout << GREEN << "AAnimal Default Constructor Called\n" RESET;
}

AAnimal::AAnimal(const std::string& type) : type_(type)
{
	std::cout << GREEN << "AAnimal Type Constructor Called\n" RESET;
}

AAnimal::AAnimal(const AAnimal& other) : type_(other.type_)
{
	std::cout << YELLOW << "AAnimal Copy Constructor Called\n" RESET;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << BRIGHT_GREEN << "AAnimal Assignment Operator Called\n" RESET;
	type_ = other.type_;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal Destructor Called\n" RESET;
}

void AAnimal::makeSound() const
{
	std::cout << "*AAnimal Noises*\n";
}

const std::string& AAnimal::getType() const
{
	return type_;
}