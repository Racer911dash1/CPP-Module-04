#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

		void makeSound() const override;

		const Brain& getBrain() const;
		Brain& getBrain();

	private:
		Brain* brain_ {nullptr};
};

#endif /* CAT_HPP */
