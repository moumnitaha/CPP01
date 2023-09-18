/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:55:42 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/18 22:46:31 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
    Weapon      *_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void    attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif