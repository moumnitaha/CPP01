/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:24:18 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/13 16:59:46 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    if (N <= 0 || !name.length()) {
        std::cout << "Error: N must be positive and name must be non-empty" << std::endl;
        exit (0);
    }
    Zombie* horde = new Zombie[N];
    if (!horde) {
        std::cout << "Error: Memory allocation failed" << std::endl;
        exit (0);
    }
    for (int i = 0; i < N; i++)
    {
        horde[i].set_name(name);
    }  
    return (horde);
}
