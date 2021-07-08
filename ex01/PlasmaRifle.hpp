/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:48:34 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 15:58:20 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include "AWeapon.hpp"
class PlasmaRifle : public AWeapon
{
	private:
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &_PlasmaRifle);
		PlasmaRifle &operator = (const PlasmaRifle &_PlasmaRifle);
		virtual ~PlasmaRifle();
		void	attack() const;
};
#endif