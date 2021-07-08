/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:10:15 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 21:33:24 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	this->hp = 80;
	this->type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &_RadScorpion)
{
	*this = _RadScorpion;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion& RadScorpion::operator = (const RadScorpion &_RadScorpion)
{
	if (this == &_RadScorpion)
		return (*this);
	this->hp = _RadScorpion.hp;
	this->type = _RadScorpion.type;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}