#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &_MateriaSource);
        ~MateriaSource();
        MateriaSource &operator = (const MateriaSource &_MateriaSource);
        void    learnMateria(AMateria*) override;
        AMateria* createMateria(std::string const &type) override;
};
#endif