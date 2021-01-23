/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:53:33 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 23:01:17 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

using   std::string;

class Weapon{
    private:
        string  type;

    public:
        Weapon(string type);
        void    setType(string type);
        string  const &getType(void);
        ~Weapon();
};

#endif