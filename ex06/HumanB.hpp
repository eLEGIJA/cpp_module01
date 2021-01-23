/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:51:09 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 22:51:52 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

using   std::string;

class HumanB {
    private:
        string  name;
        Weapon  *weapon;

    public:
        HumanB(string name);
        void    setWeapon(Weapon &Weapon);
        void    attack(void);
        ~HumanB(void);
};

#endif