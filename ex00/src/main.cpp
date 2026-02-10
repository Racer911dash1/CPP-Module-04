#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();

		std::cout << cat->getType() << "\n";
		std::cout << dog->getType() << "\n";
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << cat->getType() << "\n";
		meta->makeSound();
		cat->makeSound();

		delete meta;
		delete cat;
	}
	return EXIT_SUCCESS;
}