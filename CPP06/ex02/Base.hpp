#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Base
{
	private:
		/*args*/
	public:
		// Base();
		virtual ~Base();
		// Base(const Base& copy);
		// Base& operator=(const Base& copy);
		Base*	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif /*BASE_HPP*/