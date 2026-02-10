#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		// const AAnimal* meta = new AAnimal();
		const AAnimal* cat = new Cat();
		const AAnimal* dog = new Dog();

		std::cout << cat->getType() << "\n";
		std::cout << dog->getType() << "\n";
		cat->makeSound();
		dog->makeSound();

		delete cat;
		delete dog;
	}
	return EXIT_SUCCESS;
}