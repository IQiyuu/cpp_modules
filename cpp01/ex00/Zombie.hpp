/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ By: DIEU       /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\                /|\ -_UwU_- /|\ */
/* /|\ -_UwU_- /|\ Zombie.hpp     /|\ -_UwU_- /|\ */
/* -#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*-#*- */

#ifndef DIONYSOS
# define DIONYSOS

# include <iostream>
# define GREEN "\x1b[0;32m"
# define RED "\x1b[0;s31m"

class Zombie
{
    private:
        std::string name;

    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
        Zombie operator=( const Zombie &);
        void    announce( void );
};

#endif