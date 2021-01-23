/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:53:43 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 22:58:37 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using   std::string;;
using   std::cout;
using   std::endl;

HumanB::HumanB(string name):name(name){
}

void HumanB::setWeapon(Weapon &Weapon){
	this->weapon = &Weapon;
}

void HumanB::attack(void){
	cout << this->name << " attacks with his " << this->weapon->getType() << endl;
}

HumanB::~HumanB(void){
}