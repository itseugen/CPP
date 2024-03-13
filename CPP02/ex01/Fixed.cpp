#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fix_val = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "int to fixpoint constructor called" << std::endl;
	fix_val = val << fr_bits;
}

Fixed::Fixed(const float val)
{
	std::cout << "float to fixpoint constructor called" << std::endl;
	//Convert to fixed point number
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &f)
	{
		*this = f;
	}
}

Fixed&	Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->fix_val = f.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fix_val = raw;
}

float	Fixed::toFloat(void) const
{
	//Convert fixedpoint to floating point
}

int		Fixed::toInt(void) const
{
	//Convert fixedpoint to int
	return (this->fix_val >> fr_bits);
}

