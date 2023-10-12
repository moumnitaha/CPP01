/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:18:39 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 10:45:51 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 15;

    Zombie *zh = zombieHorde(N, "Zombie");
    for (int i = 0; i < N; i++)
    {
        zh[i].announce();
    }
    delete [] zh;
    return (0);
}
