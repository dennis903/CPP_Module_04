/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:14:38 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 18:01:02 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy(const Enemy &_Enemy)
{
	*this = _Enemy;
}

Enemy::~Enemy()
{
}

Enemy& Enemy::operator = (const Enemy &_Enemy)
{
	if (this == &_Enemy)
		return (*this);
	this->hp = _Enemy.hp;
	this->type = _Enemy.type;
}

void	Enemy::setHP(int hp)
{
	this->hp = hp;
}

void	Enemy::setType(std::string &type)
{
	this->type = type;
}

int		Enemy::getHP(void) const
{
	return (this->hp);
}

std::string Enemy::getType(void) const
{
	return (this->type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (this->hp - damage >= 0)
		this->hp -= damage;
	else
		this->hp = 0;
}
