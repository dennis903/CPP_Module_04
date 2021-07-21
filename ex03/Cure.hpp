#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria
{
    private:
    public:
        Cure();
        Cure(const Cure &_Cure);
        virtual ~Cure();
        Cure &operator = (const Cure &_Cure);
        AMateria* clone() const;
        void    use(ICharacter& target);
};
#endif