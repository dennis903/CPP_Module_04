/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:56:32 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/09 16:47:19 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
#include "ISquad.hpp"


class Squad : public ISquad
{
	private:
		int		count;
		ISpaceMarine **units;
	public:
		Squad();
		Squad(const Squad &_Squad);
		~Squad();
		Squad &operator = (const Squad &_Squad);
		int		getCount() const;
		ISpaceMarine* getUnit(int count) const;
		int		push(ISpaceMarine* Marine);
};
#endif