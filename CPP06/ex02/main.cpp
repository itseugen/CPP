#include "Base.hpp"

int	main(void)
{
	std::srand(std::time(NULL));
	{
		Base	test;

		Base*	a = test.generate();
		Base*	b = test.generate();
		Base*	c = test.generate();

		Base&	a2 = *a;
		Base&	b2 = *b;
		Base&	c2 = *c;

		std::cout << "\nPointer Test!\n";
		test.identify(a);
		test.identify(b);
		test.identify(c);
		test.identify(NULL);
		std::cout << "\n\nReference Test!\n";
		test.identify(a2);
		test.identify(b2);
		test.identify(c2);

		delete a;
		delete b;
		delete c;
	}
}
