/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:44:07 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/20 17:43:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void Harl::debug(void)
{
	std::cout << "This is a debug msg" << std::endl;
}

void Harl::info(void)
{
	std::cout << "This is an info msg" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "This is a warning msg" << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is an error msg" << std::endl;
}

void Harl::complain( std::string level )
{
	void		(Harl::*complain_fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	std::string	levels[4] = {"DEBUG", "INFO", "ERROR", "WARNING"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*complain_fun[i])();
	}
	
}