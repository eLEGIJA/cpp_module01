/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:40:22 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/17 18:27:29 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

using   std::string;

ZombieEvent::ZombieEvent() {
	this->type = string("none");
}

void ZombieEvent::setZombieType(string type) {
	this->type = type;
}

Zombie* ZombieEvent::newZombie(string name) {
	Zombie*     ptr = new Zombie;
	ptr->Zombie_res(this->type, name);
	return (ptr);
}