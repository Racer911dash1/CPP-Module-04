#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal() = 0;

		virtual void makeSound() const = 0;

		const std::string& getType() const;

	protected:
		std::string type_;
};

#endif /* AAnimal_HPP */