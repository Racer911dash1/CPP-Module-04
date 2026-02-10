#include "Brain.hpp"
#include "colors.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << GREEN << "Brain Default Constructor Called\n" << RESET;
}

Brain::Brain(const Brain& other)
{
	std::cout << YELLOW << "Brain Copy Constructor Called\n" << RESET;
	std::copy(other.ideas_, other.ideas_ + IDEA_CAPACITY, ideas_);
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << BRIGHT_GREEN << "Brain Assignment Operator Called\n" << RESET;
	std::copy(other.ideas_, other.ideas_ + IDEA_CAPACITY, ideas_);
	return *this;
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destructor Called\n" << RESET;
}

void Brain::setIdea(unsigned int idx, const std::string& idea)
{
	if (idx < IDEA_CAPACITY)
	{
		ideas_[idx] = idea;
	}
}

const std::string& Brain::getIdea(unsigned int idx) const
{
	return ideas_[idx];
}
