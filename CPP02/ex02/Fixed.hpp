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
		bool	operator>(const Fixed& f) const;
		bool	operator<(const Fixed& f) const;
		bool	operator>=(const Fixed& f) const;
		bool	operator<=(const Fixed& f) const;
		bool	operator==(const Fixed& f) const;
		bool	operator!=(const Fixed& f) const;
		Fixed	operator+(const Fixed& f) const;
		Fixed	operator-(const Fixed& f) const;
		Fixed	operator*(const Fixed& f) const;
		Fixed	operator/(const Fixed& f) const;
		Fixed&	operator++();
		Fixed	operator++(int);

		static Fixed&		min(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static Fixed&		max(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
	private:
		int					fix_val;
		static const	int	fr_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif /*FIXED_HPP*/