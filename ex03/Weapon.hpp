/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:36:53 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/18 18:49:23 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        ~Weapon();
        std::string const getType(void);
        void    setType(std::string type); 
};
