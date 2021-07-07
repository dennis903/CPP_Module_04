/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:55:15 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 20:26:09 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include <string>

class Victim;

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	public:
		Sorcerer();
		Sorcerer(const std::string &name, const std::string &title);
		Sorcerer(const Sorcerer &_Sorcerer);
		~Sorcerer();
		Sorcerer &operator = (const Sorcerer &_Sorcerer);
		void		polymorph(Victim const &_Victim) const;
		void		setName(const std::string &name);
		void		setTitle(const std::string &title);
		std::string	getName(void);
		std::string	getTitle(void);
};
std::ostream &operator << (std::ostream &out, Sorcerer &_Sorcerer);
#endif