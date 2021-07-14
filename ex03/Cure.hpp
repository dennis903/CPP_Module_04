#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
    private:
    public:
        Ice();
        Ice(const Ice &_Ice);
        ~Ice();
        Ice &operator = (const Ice &_Ice);
        AMateria* clone() const override;
        void    use(ICharacter& target) override;
};
#endif