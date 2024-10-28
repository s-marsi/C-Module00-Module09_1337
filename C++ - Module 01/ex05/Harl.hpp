#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#define     RED "\033[31m"  
#define   GREEN "\033[32m"
#define  YELLOW "\033[33m"
#define    BLUE "\033[34m"
#define DEFAULT "\033[0m"

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
};

#endif