/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:44:07 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/20 23:17:43 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is Alive!" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is dead!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-";
	std::cout << "triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout <<  "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout << "for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int j = -1;
	void		(Harl::*complain_fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			j = i;
			while(j < 4)
			{
				switch (j)
				{
					case 0:
						(this->*complain_fun[0])();
						break;
					case 1:
						(this->*complain_fun[1])();
						break;
					case 2:
						(this->*complain_fun[2])();
						break;
					case 3:
						(this->*complain_fun[3])();
						break;
					default:
						break;
				}
				std::cout << std::endl;
				j++;
			}
		}
	}
	if (j == -1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}