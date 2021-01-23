/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:53:48 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 22:55:37 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using   std::string;;
using   std::cout;
using   std::endl;

HumanA::HumanA(string name, Weapon & Weapon):name(name), weapon(Weapon){
}

void HumanA::attack(void){
	cout << this->name << " attacks with his " << this->weapon.getType() << endl;
}

HumanA::~HumanA(void){
}