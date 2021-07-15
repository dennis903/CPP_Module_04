#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &_Cure)
{
    *this = _Cure;
}

Cure::~Cure()
{
}

Cure& Cure::operator = (const Cure &_Cure)
{
    if (this == &_Cure)
        return (*this);
    this->_xp = _Cure._xp;
    this->type = _Cure.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *cure = new Cure;
    return (cure);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
    AMateria::use(target);
}