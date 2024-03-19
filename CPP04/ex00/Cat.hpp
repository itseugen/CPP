#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

class Cat
{
	private:
		/*args*/
	public:
		Cat();
		~Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
};

#endif /*CAT_HPP*/