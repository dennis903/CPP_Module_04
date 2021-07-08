/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:55:57 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 20:48:51 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("No name"), ap(40), Weapon(NULL)
{
}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->Weapon = NULL;
}

Character::Character(const Character &_Character)
{
	*this = _Character;
}

Character& Character::operator = (const Character &_Character)
{
	if (this == &_Character)
		return (*this);
	this->name = _Character.name;
	this->ap = _Character.ap;
	return (*this);
}

void	Character::setName(std::string const &name)
{
	this->name = name;
}

void	Character::setAP(int ap)
{
	this->ap = ap;
}

std::string	Character::getName(void) const
{
	return (this->name);
}

int			Character::getAP(void) const
{
	return (this->ap);
}

AWeapon		*Character::getWeapon(void) const
{
	return (this->Weapon);
}

void	Character::recoverAP()
{
	if (this->ap + 10 > 40)
		this->ap = 40;
	else
		this->ap += 10;
	std::cout << this->name << " recovered 10AP" << std::endl;
	std::cout << "Current AP : " << this->ap << std::endl;
}

void	Character::attack(Enemy *_Enemy)
{
	if (this->getWeapon() == NULL)
		return ;
	else
	{
		if (this->ap - this->getWeapon()->getAPCost() < 0)
		{
			std::cout << "Not enough AP" << std::endl;
			return ;
		}
		else
		{
			std::cout << this->name << " attack " << _Enemy->getType() << " with  a " << this->getWeapon()->getName() << std::endl;
			this->ap -= this->getWeapon()->getAPCost();
			_Enemy->takeDamage(this->getWeapon()->getDamage());
			if (_Enemy->getHP() == 0)
				_Enemy->~Enemy();
		}
	}
}


std::ostream &operator << (std::ostream &out, const Character &_Character)
{
	if (_Character.getWeapon() == NULL)
		out << _Character.getName() << " has " << _Character.getAP() << " and is unarmed" << std::endl;
	else
		out << _Character.getName() << " has " << _Character.getAP() << " and " << "wields a " << _Character.getWeapon()->getName() << std::endl;
	return (out);
}