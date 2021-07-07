/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:55:15 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 21:44:00 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"

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
		void		polymorph(Victim const &victim) const;
		void		setName(const std::string &name);
		void		setTitle(const std::string &title);
		const std::string	getName(void) const;
		const std::string	getTitle(void) const;
};
std::ostream &operator << (std::ostream &out, Sorcerer &_Sorcerer);
#endif