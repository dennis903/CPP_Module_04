/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:48:14 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 21:48:02 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	this->name = "No Name";
	this->title = "No Title";
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << " " << this->title << ", is born" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &_Sorcerer)
{
	*this = _Sorcerer;
	std::cout << this->name << ", " << this->title << ", is born" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", " << "is dead, Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator = (const Sorcerer &_Sorcerer)
{
	if (this == &_Sorcerer)
		return (*this);
	this->name = _Sorcerer.name;
	this->title = _Sorcerer.title;
	return (*this);
}

void	Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

void	Sorcerer::setName(const std::string &name)
{
	this->name = name;
}

void	Sorcerer::setTitle(const std::string &title)
{
	this->title = title;
}

const std::string	Sorcerer::getName(void) const
{
	return (this->name);
}

const std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}

std::ostream &operator << (std::ostream &out, Sorcerer &_Sorcerer)
{
	out << "I am " << _Sorcerer.getName() << ", " << _Sorcerer.getTitle()  << ", and I like ponies" << std::endl;
	return (out);
}
