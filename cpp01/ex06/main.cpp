#include "Harl.hpp"

int main( int argc, char *argv[] )
{
	if (argc < 2)
		return (0);
    Harl h = Harl();
	
    h.complain(argv[1]);
}