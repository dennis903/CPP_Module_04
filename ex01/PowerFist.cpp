/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:06:39 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 20:55:52 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon()
{
	this->name = "Power Fist";
	this->damage = 50;
	this->apcost = 8;
}

PowerFist::PowerFist(const PowerFist &_PowerFist)
{
	*this = _PowerFist;
}

PowerFist::~PowerFist()
{
}

PowerFist& PowerFist::operator = (const PowerFist &_PowerFist)
{
	if (this == &_PowerFist)
		return (*this);
	this->name = _PowerFist.name;
	this->damage = _PowerFist.damage;
	this->apcost = _PowerFist.apcost;
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}