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
        ~Ice();
        Ice &operator = (const Ice &_Cure);
        AMateria* clone() const override;
        void    use(ICharacter& target) override;
};
#endif