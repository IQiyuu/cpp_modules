#ifndef POULE
# define POULE

# include <iostream>

class Fixed{
	private:
		int	entier;
		static const int fract;

	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );
		~Fixed( void );
		Fixed	&operator=( const Fixed & );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif