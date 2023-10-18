#ifndef BRAIN
#define BRAIN

#include <iostream>

class Brain {
    private:
        std::string *ideas;

    public:
        Brain( void );
        Brain( Brain & );
        ~Brain( void );
        Brain &operator=( Brain const & );
        std::string *getIdeas( void );
};

#endif