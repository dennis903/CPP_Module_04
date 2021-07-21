#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria
{
    private:
    public:
        Ice();
        Ice(const Ice &_Cure);
        virtual ~Ice();
        Ice &operator = (const Ice &_Cure);
        AMateria* clone() const;
        void    use(ICharacter& target);
};
#endif