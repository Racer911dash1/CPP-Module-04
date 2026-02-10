#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		Animal* animals[10];
		size_t idx = 0;

		for (idx = 0; idx < 5; idx++)
		{
			animals[idx] = new Cat();
		}
		for (idx = 5; idx < 10; idx++)
		{
			animals[idx] = new Dog();
		}
		for (idx = 0; idx < 10; idx++)
		{
			animals[idx]->makeSound();
		}
		for (idx = 0; idx < 10; idx++)
		{
			delete animals[idx];
		}
	}
	{
		Cat* cat1 = new Cat();
		Cat* cat2 = new Cat();

		cat1->getBrain().setIdea(0, "We're surrounded by Fish");
		cat2->getBrain().setIdea(0, "Horny Fish");
		cat1->getBrain().setIdea(1, "You know what that means");
		cat2->getBrain().setIdea(1, "FISH Orgy");
		std::cout << cat1->getBrain().getIdea(0) << "\n";
		std::cout << cat2->getBrain().getIdea(0) << "\n";
		std::cout << cat1->getBrain().getIdea(1) << "\n";
		std::cout << cat2->getBrain().getIdea(1) << "\n";
		*cat1 = *cat2;
		std::cout << cat1->getBrain().getIdea(0) << "\n";
		std::cout << cat2->getBrain().getIdea(0) << "\n";
		std::cout << cat1->getBrain().getIdea(1) << "\n";
		std::cout << cat2->getBrain().getIdea(1) << "\n";
		cat1->getBrain().setIdea(0, "We're surrounded by Fish");
		cat2->getBrain().setIdea(0, "Horny Fish");
		cat1->getBrain().setIdea(1, "You know what that means");
		cat2->getBrain().setIdea(1, "FISH Orgy");
		std::cout << cat1->getBrain().getIdea(0) << "\n";
		std::cout << cat2->getBrain().getIdea(0) << "\n";
		std::cout << cat1->getBrain().getIdea(1) << "\n";
		std::cout << cat2->getBrain().getIdea(1) << "\n";
		delete cat1;
		delete cat2;
	}
	{
		Cat cat1;
		Cat cat2;

		cat1.getBrain().setIdea(0, "Fish");
		cat2.getBrain().setIdea(0, "Catnip");
		cat1 = cat2;
		std::cout << cat1.getBrain().getIdea(0) << "\n";
		std::cout << cat2.getBrain().getIdea(0) << "\n";
		cat1.getBrain().setIdea(0, "Fish");
		cat2.getBrain().setIdea(0, "Catnip");
		std::cout << cat1.getBrain().getIdea(0) << "\n";
		std::cout << cat2.getBrain().getIdea(0) << "\n";
	}
	{
		Cat cat1;
		Cat cat2(cat1);

		cat1.getBrain().setIdea(0, "Fish");
		std::cout << cat1.getBrain().getIdea(0) << "\n";
		std::cout << cat2.getBrain().getIdea(0) << "\n";
		cat2.getBrain().setIdea(0, "Catnip");
		std::cout << cat1.getBrain().getIdea(0) << "\n";
		std::cout << cat2.getBrain().getIdea(0) << "\n";
	}
	return EXIT_SUCCESS;
}