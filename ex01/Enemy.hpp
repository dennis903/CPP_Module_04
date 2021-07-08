/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:14:54 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 18:00:37 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
class Enemy
{
	protected:
		int			hp;
		std::string	type;
		Enemy();
	public:
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &_Enemy);
		virtual ~Enemy();
		Enemy &operator = (const Enemy &_Enemy);
		void	setHP(int hp);
		void	setType(std::string &type);
		int		getHP(void) const;
		std::string getType(void) const;
		virtual void takeDamage(int damage);
};
#endif