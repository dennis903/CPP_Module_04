#include "AMateria.hpp"
#include <iostream>
AMateria::AMateria() : type("No name"), _xp(0)
{
}

AMateria::AMateria(std::string const & type)
{
    this->_xp = 0;
    this->type = type;
}

AMateria::AMateria(const AMateria &_AMateria)
{
    *this = _AMateria;
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator = (const AMateria &_AMateria)
{
    if (this == &_AMateria)
        return (*this);
    this->_xp = _AMateria._xp;
    this->type = _AMateria.type;
    return (*this);
}

std::string const& AMateria::getType() const
{
    return (this->type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void    AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}

