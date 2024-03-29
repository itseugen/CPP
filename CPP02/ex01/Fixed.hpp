#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed &f);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					fix_val;
		static const	int	fr_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif /*FIXED_HPP*/