/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:52:01 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 16:01:30 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon()
{
	this->name = "Plasma Rifle";
	this->damage = 21;
	this->apcost = 5;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &_PlasmaRifle)
{
	*this = _PlasmaRifle;
}

PlasmaRifle& PlasmaRifle::operator = (const PlasmaRifle &_PlasmaRifle)
{
	if (this == &_PlasmaRifle)
		return (*this);
	this->name = _PlasmaRifle.name;
	this->damage = _PlasmaRifle.damage;
	this->apcost = _PlasmaRifle.apcost;
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
