/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:19:31 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/09 17:05:57 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count(0), units(nullptr)
{
}

Squad::Squad(const Squad &_Squad)
{
	int		i;

	this->count = _Squad.count;
	this->units = new ISpaceMarine*[count];
	i = 0;
	while (i < this->count)
	{
		units[i] = _Squad.units[i];
		i++;
	}
}

Squad::~Squad()
{
	int	i;

	i = 0;
	while (i < this->count)
	{
		delete units[i];
		i++;
	}
	if (this->count > 0)
		delete this->units;
}

Squad& Squad::operator = (const Squad &_Squad)
{
	int	i;
	if (this == &_Squad)
		return (*this);
	if (this->units != nullptr)
	{
		i = 0;
		while (i < this->count)
		{
			delete this->units[i];
			i++;
		}
		if (this->count > 0)
			delete this->units;
	}
	this->count = _Squad.count;
	this->units = new ISpaceMarine*[count];
	i = 0;
	while(i < count)
	{
		this->units[i] = _Squad.units[i];
		i++;
	}
	return (*this);
}

int		Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int count) const
{
	return (this->units[count]);
}

int		Squad::push(ISpaceMarine* Marine)
{
	int		i;

	if (this->units == nullptr)
		return (this->count);
	i = 0;
	while (i < count)
	{
		if (this->units[i] == Marine)
			return (count);
		i++;
	}
	ISpaceMarine **temp = new ISpaceMarine*[this->count + 1];
	i = 0;
	while (i < count)
	{
		temp[i] = this->units[i];
		i++;
	}
	delete units;
	temp[i] = Marine;
	this->count++;
	return (count);
}