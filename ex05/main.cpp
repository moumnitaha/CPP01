/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:42:57 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/20 18:51:39 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl *me = new Harl();
	std::cout << "--------------" << std::endl;
	me->complain("DEBUG");
	std::cout << "--------------" << std::endl;
	me->complain("INFO");
	std::cout << "--------------" << std::endl;
	me->complain("WARNING");
	std::cout << "--------------" << std::endl;
	me->complain("ERROR");
	std::cout << "--------------" << std::endl;
	me->complain("LEVEL UNKOWN");
	std::cout << "--------------" << std::endl;
	delete me;
	return (0);
}
