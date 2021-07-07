/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:50:47 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 19:58:18 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include "Sorcerer.hpp"
class Victim
{
	protected:
		std::string &name;
	public:
		Victim();
		Victim(const std::string &name);
		Victim(const Victim &_Victim);
		~Victim();
		Victim	&operator = (const Victim &_Victim);
		void	getPolymorphed() const;
};
std::ostream &operator << (std::ostream &out, const Victim &_Victim);
#endif