/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:53:38 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 22:58:37 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using   std::string;

Weapon::Weapon(string type){
	this->type = type;
}

void Weapon::setType(string type){
	this->type = type;
}

std::string const & Weapon::getType (void) {
	string const & ref = this->type;
	return (ref);
}

Weapon::~Weapon(void){
}