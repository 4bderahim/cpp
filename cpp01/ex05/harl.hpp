

#pragma once

#include <iostream>

class Harl{

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        void (Harl::*levelsStrPrts[4]) ();
        void complain( std::string level );
};