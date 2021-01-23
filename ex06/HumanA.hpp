/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:50:07 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 22:51:56 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

using   std::string;

class HumanA {
    private:
        string  name;
        Weapon  &weapon;

    public:
        HumanA(string name, Weapon &Weapon);
        void    attack(void);
        ~HumanA(void);
};

#endif