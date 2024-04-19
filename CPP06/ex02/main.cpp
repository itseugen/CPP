#include "Base.hpp"

int	main(void)
{
	std::srand(std::time(NULL));
	Base	test;

	Base*	a = test.generate();
	Base*	b = test.generate();
	Base*	c = test.generate();

	test.identify(a);
	test.identify(b);
	test.identify(c);
	test.identify(NULL);

	delete a;
	delete b;
	delete c;
}
