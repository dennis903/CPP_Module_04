#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
    private:
    public:
        Cure();
        Cure(const Cure &_Cure);
        ~Cure();
        Cure &operator = (const Cure &_Cure);
        AMateria* clone() const override;
        void    use(ICharacter& target) override;
};
#endif