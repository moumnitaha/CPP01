/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:54 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/18 18:46:18 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

std::string const Weapon::getType(void)
{
    std::string const &ref = this->_type;
    return (ref);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}