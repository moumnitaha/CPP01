/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:18:40 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/20 14:23:42 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::ifstream   ifile(av[1]);
    std::ofstream   ofile("coco.txt");
    std::string line;
    while (getline(ifile, line))
    {
        std::cout << line << std::endl;
        ofile << line << std::endl;
    }
    ifile.close();
    ofile.close();
}