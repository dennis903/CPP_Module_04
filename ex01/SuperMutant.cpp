/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:03:26 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 21:04:03 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	this->hp = 170;
	this->type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &_SuperMutant)
{
	*this = _SuperMutant;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator = (const SuperMutant &_SuperMutant)
{
	if (this == &_SuperMutant)
		return (*this);
	this->hp = _SuperMutant.hp;
	this->type = _SuperMutant.type;
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (this->hp - damage + 3 >= 0)
	{
		this->hp -= damage;
		this->hp += 3;
	}
	else
		this->hp = 0;
}