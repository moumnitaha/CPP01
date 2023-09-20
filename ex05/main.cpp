/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:42:57 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/20 17:19:48 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl *me = new Harl();
	me->complain("DEBUG");
	me->complain("INFO");
	me->complain("WARNING");
	me->complain("ERROR");
	return (0);
}
