#include "Character.hpp"
#include <iostream>

Character::Character() : name("No name")
{
    for (int i = 0; i < 4; i++)
        this->Inventory[i] = NULL;
}

Character::Character(const std::string &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        this->Inventory[i] = NULL;
}

Character::Character(const Character &_Character)
{
    *this = _Character;
    
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] != NULL)
        {
            delete this->Inventory[i];
            this->Inventory[i] = _Character.Inventory[i]->clone();
        }
        else
            this->Inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] != NULL)
            delete Inventory[i];
    }
}

Character& Character::operator = (const Character &_Character)
{
    if (this == &_Character)
        return (*this);
    this->name = _Character.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->Inventory[i] != NULL)
            delete this->Inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (_Character.Inventory[i] != NULL)
            this->Inventory[i] = _Character.Inventory[i]->clone();
        else
            this->Inventory[i] = NULL;
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->name);
}

void    Character::equip(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4 && this->Inventory[i] != NULL)
        i++;
    if (i == 4)
        return ;
    this->Inventory[i] = m;
}

void    Character::unequip(int idx)
{
    if (idx < 0)
        return ;
    else if (idx >= 4)
        return ;
    else if (this->Inventory[idx] == NULL)
        return ;
    else
        this->Inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0)
        return ;
    else if (idx >= 4)
        return ;
    else if (this->Inventory[idx] == NULL)
    {
        return ;
    }
    else
        this->Inventory[idx]->use(target);
}