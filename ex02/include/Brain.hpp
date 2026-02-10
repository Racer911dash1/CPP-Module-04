#ifndef BRAIN_HPP
# define BRAIN_HPP

# define IDEA_CAPACITY 100

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		void setIdea(unsigned int idx, const std::string& idea);
		const std::string& getIdea(unsigned int idx) const;

	protected:
		std::string ideas_[IDEA_CAPACITY];
};

#endif /* BRAIN_HPP */
