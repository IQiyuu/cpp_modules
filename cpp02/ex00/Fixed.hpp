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
		~Fixed( void );
		Fixed	&operator=( const Fixed & );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif