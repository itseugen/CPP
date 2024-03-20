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
	std::cout << "-----TEST00-----\n";
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;

	std::cout << "\n\n-----TEST01-----\n";
	Dog*	d = new Dog();
	Dog*	c = new Dog();

	d->newIdea("Woof0");
	d->newIdea("Woof1");
	d->newIdea("Woof2");
	d->newIdea("Woof3");
	d->printIdeas();
	std::cout << "\n\n\n";
	c = d;
	c->printIdeas();
	std::cout << "\n\n\n";
	d->newIdea("Woof4");
	// c->newIdea("Other woof");
	d->printIdeas();
	std::cout << "\n\n\n";
	c->printIdeas();

	delete d;
	// delete c;
	return (0);
}
