#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

static void	test0(void);
static void	test1(void);
static void	test2(void);

int	main(void)
{
	test0();
	test1();
	test2();
	// Animal	a;
	// Animal	*b = new Animal();
	return (0);
}

static void	test0(void)
{
	std::cout << "-----TEST00-----\n";
	const Dog*	j = new Dog();
	const Cat*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;
}

static void	test1(void)
{
	std::cout << "\n\n-----TEST01-----\n";
	Dog*	d = new Dog();

	d->newIdea("Woof0");
	d->newIdea("Woof1");
	d->newIdea("Woof2");
	d->newIdea("Woof3");
	d->printIdeas();
	std::cout << "\n\n";
	Dog*	c = new Dog(*d);
	c->printIdeas();
	std::cout << "\n\n";
	d->newIdea("Woof4");
	d->printIdeas();
	std::cout << "\n\n";
	c->printIdeas();
	delete d;
	delete c;
}

static void	test2(void)
{
	std::cout << "\n\n-----TEST02-----\n";
	Cat	a;
	Cat	b;

	a.newIdea("Cheeeeeeese!");
	a.makeSound();
	a.newIdea("Miiiilk!");
	a.newIdea("Tunaaaa!");
	b = a;
	std::cout << "\n\n";
	b.newIdea("I am a special Idea!");
	a.printIdeas();
	b.printIdeas();
}
