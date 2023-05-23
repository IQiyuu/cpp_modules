#ifndef POULE
# define POULE

# include <iostream>

class Fixed{
	private:
		int	entier;
		static const int jsp;

	public:
		Fixed( void );
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );
		~Fixed( void );

		Fixed	&operator=( const Fixed & );
		bool	operator<( const Fixed & );
		bool	operator>( const Fixed & );
		bool	operator<=( const Fixed & );
		bool	operator>=( const Fixed & );
		bool	operator==( const Fixed & );
		bool	operator!=( const Fixed & );

		float	operator+( const Fixed &f );
		float	operator-( const Fixed &f );
		float	operator*( const Fixed &f );
		float	operator/( const Fixed &f );

		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		friend std::ostream& operator<<(std::ostream& os, const Fixed &f);

		static Fixed	&min( Fixed &l, Fixed &r );
		static const Fixed	&min( const Fixed &l, const Fixed &r );
		static Fixed	&max( Fixed &l, Fixed &r );
		static const Fixed	&max( const Fixed &l, const Fixed &r );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

#endif