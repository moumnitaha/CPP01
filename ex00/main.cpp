/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:18:39 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 10:36:46 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie1;
    Zombie *zombie2;

    zombie1 = newZombie("zombie1");
    zombie1->announce();

    zombie2 = newZombie("zombie2");
    zombie2->announce();

    randomChump("zombie3");
    randomChump("zombie4");

    delete zombie1;
    delete zombie2;
}
