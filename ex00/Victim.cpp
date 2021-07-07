/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:33:39 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 22:10:55 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	this->name = "No name";
}

Victim::Victim(const std::string &name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &_Victim)
{
	*this = _Victim;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator = (const Victim &_Victim)
{
	if (this == &_Victim)
		return (*this);
	this->name = _Victim.name;
	return (*this);
}

void	Victim::setName(const std::string &name)
{
	this->name = name;
}

std::string	Victim::getName(void)
{
	return (this->name);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator << (std::ostream &out, Victim &_Victim)
{
	out << "I'm " << _Victim.getName() << " and I like otters!" << std::endl;
	return (out);
}
