/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:00:44 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 20:05:58 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

using   std::endl;
using   std::cout;
using   std::string;

ZombieHorde::ZombieHorde (int n){
	if (n <= 0)
	{
		cout << "Horde less 1" << endl;
	}
	this->count = n;
	this->horde = new Zombie[n];
	string names[10] = {"Andrew", "Pasha", "Sasha", "Altana", "Dasha",
						"Jenya", "Leha", "Tanya", "Vika", "Nastya"};
	while (--n != -1)
	{
		srand(n);
		this->horde[n].Zombie_res("horde", names[rand() % 10]);
	}
}

void ZombieHorde::announce(void){
	int i = 0;
	while (i < this->count)
		this->horde[i++].announce();

}

ZombieHorde::~ZombieHorde (void) {
	delete [] this->horde;
}