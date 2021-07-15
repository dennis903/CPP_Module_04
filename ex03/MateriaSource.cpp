#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4 ; i++)
        this->Inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &_MateriaSource)
{
    *this = _MateriaSource;
  
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] != NULL)
        {
            delete this->Inventory[i];
            this->Inventory[i] = _MateriaSource.Inventory[i]->clone();
        }
        else
            this->Inventory[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] != NULL)
            delete this->Inventory[i];
    }
}


MateriaSource& MateriaSource::operator = (const MateriaSource &_MateriaSource)
{
    if (this == &_MateriaSource)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] == NULL)
            delete this->Inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (_MateriaSource.Inventory[i] != NULL)
            this->Inventory[i] = _MateriaSource.Inventory[i]->clone();
        else
            this->Inventory[i] = NULL;
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* _Materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] == NULL)
        {
            this->Inventory[i] = _Materia;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] != NULL && this->Inventory[i]->getType() == type)
            return (this->Inventory[i]->clone());
    }
    return (0);
}