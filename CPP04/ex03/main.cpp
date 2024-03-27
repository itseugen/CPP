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

int main()
{
	test1();
	test2();
	system("leaks interface");
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
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	delete a;
	delete src;
}
