/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:10:09 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 17:28:39 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : name("No name"), apcost(0), damage(0)
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &_AWeapon)
{
	*this = _AWeapon;
}

AWeapon::~AWeapon()
{
}

AWeapon& AWeapon::operator = (const AWeapon &_AWeapon)
{
	if (this == &_AWeapon)
		return (*this);
	this->name = _AWeapon.name;
	this->apcost = _AWeapon.apcost;
	this->damage = _AWeapon.damage;
	return (*this);
}

void	AWeapon::setName(std::string const & name)
{
	this->name = name;
}

void	AWeapon::setAPCost(int apcost)
{
	this->apcost = apcost;
}

void	AWeapon::setDamage(int damage)
{
	this->damage = damage;
}

std::string AWeapon::getName(void) const
{
	return (this->name);
}

int		AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int		AWeapon::getDamage(void) const
{
	return (this->damage);
}
