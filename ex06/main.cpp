/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:42:57 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/20 23:00:18 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	Harl *me = new Harl();
	std::cout << "--------------" << std::endl;
	me->complain(av[1]);
	std::cout << "--------------" << std::endl;
	delete me;
	return (0);
}
