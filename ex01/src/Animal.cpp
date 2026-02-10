#include "Animal.hpp"
#include "colors.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << GREEN << "Animal Default Constructor Called\n" RESET;
}

Animal::Animal(const std::string& type) : type_(type)
{
	std::cout << GREEN << "Animal Type Constructor Called\n" RESET;
}

Animal::Animal(const Animal& other) : type_(other.type_)
{
	std::cout << YELLOW << "Animal Copy Constructor Called\n" RESET;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << BRIGHT_GREEN << "Animal Assignment Operator Called\n" RESET;
	type_ = other.type_;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "Animal Destructor Called\n" RESET;
}

void Animal::makeSound() const
{
	std::cout << "*Animal Noises*\n";
}

const std::string& Animal::getType() const
{
	return type_;
}