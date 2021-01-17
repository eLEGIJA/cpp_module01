/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:40:14 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/17 20:04:50 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>
#include <ctime>

using		std::string;

Zombie* randomChump(ZombieEvent zombie_creator) {
	
	Zombie* ptr;

	srand(time(0));
	string names[10] = {"Andrew", "Pasha", "Sasha", "Altana", "Dasha",
						"Jenya", "Leha", "Tanya", "Vika", "Nastya"};
	ptr = zombie_creator.newZombie(names[rand() % 10]);
	ptr->announce();
	return (ptr);

}

int		main(void) {

	int			i = 0;
	ZombieEvent	zombie_creator;
	Zombie		*zomb_ptr[4];

	zombie_creator.setZombieType("undead");
	zomb_ptr[0] = zombie_creator.newZombie("Pasha");
	zomb_ptr[0]->announce();
	zombie_creator.setZombieType("unknown");
	zomb_ptr[1] = zombie_creator.newZombie("Sasha");
	zomb_ptr[1]->announce();
	zomb_ptr[2] = randomChump(zombie_creator);
	zombie_creator.setZombieType("family");
	zomb_ptr[3] = zombie_creator.newZombie("Tanya");
	zomb_ptr[3]->announce();
	while(i < 4)
		delete zomb_ptr[i++];
	return (0);
}