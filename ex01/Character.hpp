/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:18:27 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 20:19:45 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character
{
	private:
		std::string name;
		AWeapon		*Weapon;
		int			ap;
		Character();
	public:
		Character(std::string const &name);
		Character(const Character &_Character);
		~Character();
		Character &operator = (const Character &_Character);
		void	recoverAP();
		void	equip(AWeapon *_AWeapon);
		void	attack(Enemy *_Enemy);
		void	setName(std::string const &name);
		void	setAP(int ap);
		std::string getName(void) const;
		int			getAP(void) const;
		AWeapon		*getWeapon(void) const;
};
std::ostream &operator << (std::ostream &out, const Character &_Character);
#endif