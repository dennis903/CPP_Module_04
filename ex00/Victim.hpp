/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:50:47 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 22:15:55 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>
#include <string>

class Victim
{
	protected:
		std::string name;
		Victim();
	public:
		Victim(const std::string &name);
		Victim(const Victim &_Victim);
		~Victim();
		Victim	&operator = (const Victim &_Victim);
		virtual void	getPolymorphed() const;
		void	setName(const std::string &name);
		std::string getName(void);
};
std::ostream &operator << (std::ostream &out, Victim &_Victim);
#endif