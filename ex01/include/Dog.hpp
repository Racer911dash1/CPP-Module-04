#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();

		void makeSound() const override;

		const Brain& getBrain() const;
		Brain& getBrain();

	private:
		Brain* brain_ {nullptr};
};

#endif /* DOG_HPP */
