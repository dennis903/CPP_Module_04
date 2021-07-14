#include "Cure.hpp"

Ice::Ice() : AMateria("cure")
{
}

Ice::Ice(const Ice &_Cure)
{
    *this = _Cure;
}

Ice::~Ice()
{
}

Ice& Ice::operator = (const Ice &_Cure)
{
    if (this == &_Cure)
        return (*this);
    this->_xp = _Cure._xp;
    this->type = _Cure.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria *cure = new Ice;
    return (cure);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
}