/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:54:40 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 20:00:49 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
#include "Victim.hpp"
class Peon : public Victim
{
	private:
	public:
		Peon();
		Peon(const std::string &name);
		Peon(const Peon &_peon);
		~Peon();
		Peon & operator = (const Peon &_peon);
		void	getPolymorphed() const;
};
std::ostream & operator << (std::ostream &out, const Peon &_peon);
#endif