#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria*   Inventory[4];
        Character();
    public:
        Character(const std::string &name);
        Character(const Character &_Character);
        ~Character();
        Character &operator = (const Character &_Character);
        std::string const & getName() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
};
#endif