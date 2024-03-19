#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	private:
		/*args*/
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);

		virtual	void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif /*ANIMAL_HPP*/
