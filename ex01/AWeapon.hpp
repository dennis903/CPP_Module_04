/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:02:56 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 17:28:32 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <string>
class AWeapon
{
	protected:
		std::string	name;
		int			apcost;
		int			damage;
		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &_AWeapon);
		AWeapon &operator = (const AWeapon &_AWeapon);
		virtual ~AWeapon();
		void		setName(std::string const & name);
		void		setAPCost(int apcost);
		void		setDamage(int damage);
		std::string	getName(void) const;
		int			getAPCost(void) const;
		int			getDamage(void) const;
		virtual void	attack() const = 0;
};
#endif