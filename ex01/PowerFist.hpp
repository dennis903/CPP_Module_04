/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:02:03 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 16:10:15 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
#include "AWeapon.hpp"
class PowerFist : public AWeapon
{
	private:
	public:
		PowerFist();
		PowerFist(const PowerFist &_PowerFist);
		virtual ~PowerFist();
		PowerFist &operator = (const PowerFist &_PowerFist);
		void	attack() const;
};
#endif