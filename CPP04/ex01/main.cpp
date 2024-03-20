#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	// Dog		a;
	// Cat		b;
	// Animal	c;

	// a.makeSound();
	// b.makeSound();
	// c.makeSound();
	// std::cout << a.getType() << std::endl;
	// std::cout << b.getType() << std::endl;
	// std::cout << c.getType() << std::endl;

	// std::cout << "\n\n\n\n";

	// WrongCat	d;

	// std::cout << d.getType() << std::endl;
	// d.makeSound();
	std::cout << "-----CORRECT ANIMAL-----\n";
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	i->add


	delete j;
	delete i;
	delete meta;

	// std::cout << "\n\n-----WRONG ANIMAL-----\n";
	// const WrongAnimal *wrongAnimal = new WrongCat();
	// std::cout << wrongAnimal->getType() << std::endl;
	// wrongAnimal->makeSound();

	// delete wrongAnimal;
	return (0);
}
