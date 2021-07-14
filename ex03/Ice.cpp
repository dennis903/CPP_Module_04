#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &_Ice)
{
    *this = _Ice;
}

Ice::~Ice()
{
}

Ice&    Ice::operator = (const Ice &_Ice)
{
    if (this == &_Ice)
        return (*this);
    this->_xp = _Ice._xp;
    this->type = _Ice.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria* ice = new Ice;
    return (ice);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}