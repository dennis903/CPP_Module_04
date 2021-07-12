/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:18:59 by hyeolee           #+#    #+#             */
/*   Updated: 2021/07/09 17:19:14 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.notion.so/CPP-04-ee2c23d7f8634e68b769d1ab6e69f6a5

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &_AssaultTerminator)
{
    *this = _AssaultTerminator;
    std::cout <<  "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I will be back..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator = (const AssaultTerminator &_AssaultTerminator)
{
    if (this == &_AssaultTerminator)
        return (*this);
    return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
    return (new AssaultTerminator(*this));
}

void        AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void        AssaultTerminator::rangedAttack() const
{
    std::cout << "*does nothing *" << std::endl;
}

void        AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}