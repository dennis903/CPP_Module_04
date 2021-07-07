/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:07:10 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 22:10:01 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{
	this->name = "No name";
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name)
{
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &_peon)
{
	*this = _peon;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator = (const Peon &_peon)
{
	if (this == &_peon)
		return (*this);
	this->name = _peon.name;
	return (*this);
}

void		Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator << (std::ostream &out, Peon &_peon)
{
	out << "I'm " << _peon.getName() << " and I like otters!" << std::endl;
	return (out);
}