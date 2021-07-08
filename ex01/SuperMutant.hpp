/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:38:05 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/08 21:52:52 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"
class SuperMutant : public Enemy
{
	private:
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &_SuperMutant);
		virtual ~SuperMutant();
		SuperMutant &operator = (const SuperMutant &_SuperMutant);
		virtual void	takeDamage(int damage) override;
};
#endif