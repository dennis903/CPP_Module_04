/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:35:13 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/07 22:19:33 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int			main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "=====================more tests======================" << std::endl;
	{
		Sorcerer Korea("Korea", "Manager");
		Peon Japan("Japan");
		Victim *China = &Japan;
		Korea.polymorph(*China);
		Korea.polymorph(Japan);
	}

	return (0);
}