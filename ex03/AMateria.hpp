#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
        unsigned int _xp;
        AMateria();
    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &_AMateria);
        ~AMateria();
        AMateria &operator = (const AMateria &_AMateria);
        std::string const & getType() const;
        unsigned int getXP() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif