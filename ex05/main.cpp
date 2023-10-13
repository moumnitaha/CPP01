/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:42:57 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/13 14:54:48 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl *harl = new Harl();
	harl->complain("DEBUG");
	std::cout << std::endl;
	harl->complain("INFO");
	std::cout << std::endl;
	harl->complain("WARNING");
	std::cout << std::endl;
	harl->complain("ERROR");
	std::cout << std::endl;
	harl->complain("UNKOWN LEVEL");
	delete harl;
	return (0);
}
