#ifndef CHEVAL
# define CHEVAL

# include "Fixed.hpp"

class Point{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point( void );
		Point( float x, float y );
		Point( const Point & );
		~Point( void );
		void	operator=( const Point & );

		const Fixed	&getX( void );
		const Fixed	&getY( void );
};

#endif