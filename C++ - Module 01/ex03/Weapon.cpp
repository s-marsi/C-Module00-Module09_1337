#include "Weapon.hpp"

Weapon::Weapon( void ){};

Weapon::Weapon( std::string Type ): type(Type){};

const   std::string &Weapon::getType( void )
{
    return (type);
}
void    Weapon::setType( std::string Type )
{
    type = Type;
}