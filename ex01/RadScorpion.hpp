/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:10:00 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 20:52:43 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"
class RadScorpion : public Enemy
{
	private:
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &_RadScorpion);
		virtual ~RadScorpion();
		RadScorpion &operator = (const RadScorpion &_RadScorpion);
};
#endif