/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:18:40 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 15:28:57 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

void replace(std::ifstream & ifile,std::ofstream & ofile, std::string & s1, std::string & s2)
{
    size_t found;
    std::string tmp_line;
    std::string line;

    while (getline(ifile, line))
    {
        found = line.find(s1, 0);
        while (found != std::string::npos && s1 != s2 && s1.size() && s2.size())
        {
            tmp_line = line.substr(0, found) + s2 + line.substr(found + s1.length());
            line = tmp_line;
            found = line.find(s1, found);
        }
        std::cout << line << std::endl;
        ofile << line << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./FileStream filename s1 s2" << std::endl;
        return (0);
    }
    std::string file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    file += ".replace";

    std::ifstream   ifile(av[1]);
    if (!ifile.is_open())
    {
        std::cout << "Can't open file" << std::endl;
        return (0);
    }

    std::ofstream   ofile(file.c_str());
    if (!ofile.is_open())
    {
        std::cout << "Can't create file" << std::endl;
        return (0);
    }

    replace(ifile,ofile, s1, s2);

    ifile.close();
    ofile.close();
    return (0);
}