/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:39:29 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 20:05:58 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

using   std::cout;
using   std::endl;

void Zombie::Zombie_res(string type, string name){
	this->name = name;
	this->type = type;
}

void Zombie::announce(void){
	cout << "<" + name << "(" + type + ")> " \
        << "Braiiiiiiinnnssss..." << endl;
}
