#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    std::string type;
    public:
        Weapon( void );
        Weapon( std::string Type );
        const   std::string &getType( void );
        void    setType( std::string Type );
};

#endif