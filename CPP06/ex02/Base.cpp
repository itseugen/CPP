#include "Base.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Base::~Base()
{
	std::cout << "Base Default Destructor called" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

Base*	Base::generate(void)
{
	int	rand = std::rand() % 3;

	switch (rand)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Object has type A!\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Object has type B!\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Object has type C!\n";
	else
		std::cout << "Object has unknown type!\n";
}
