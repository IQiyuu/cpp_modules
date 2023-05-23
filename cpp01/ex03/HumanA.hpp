/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ HumanA.hpp     /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

#ifndef ARES
# define ARES

# include "Weapon.hpp"

class HumanA{
	private:
		Weapon &weapon;
		std::string name;
		HumanA( void );

	public:
			HumanA( Weapon &weapon, std::string name );
			~HumanA( void );
			HumanA operator=( const HumanA & );
			void	attack( void );
};

#endif