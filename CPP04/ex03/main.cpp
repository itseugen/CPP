#include <iostream>
#include <string>

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

static void	test1(void);
static void	test2(void);
static void	test3(void);

int main()
{
	test1();
	std::cout << "\n\n";
	test2();
	std::cout << "\n\n";
	test3();
	std::cout << "\n\n";
	// system("leaks interface");
	return 0;
}

static void	test1(void)
{
	std::cout << "------TEST01------\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete src;
	delete bob;
	delete me;
}

static void	test2(void)
{
	std::cout << "------TEST02------\n";
	IMateriaSource* src = new MateriaSource();
	ICharacter*	a = new Character("Conrad");
	src->learnMateria(new Ice());
	for (int i = 0; i < 5; i++)
		src->learnMateria(new Cure());
	for (int i = 0; i < 6; i++)
	{
		AMateria*	tmp;
		tmp = src->createMateria("ice");
		a->equip(tmp);
	}
	a->unequip(4);
	a->unequip(2);
	AMateria*	tmp;
	tmp = src->createMateria("ice");
	a->equip(tmp);
	delete a;
	delete src;
}

static void	test3(void)
{
	std::cout << "------TEST03------\n";
	ICharacter*	a = new Character("Conrad");
	ICharacter*	b = new Character("Harsh");
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	a->equip(src->createMateria("ice"));
	a->equip(src->createMateria("cure"));
	a->use(0, *b);
	a->use(1, *b);
	a->use(2, *b);
	a->use(1, *a);
	delete a;
	delete b;
	delete src;
}
