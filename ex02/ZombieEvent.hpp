/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:40:30 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/17 18:27:30 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

using	std::string;

class ZombieEvent {
	private:
		string	type;

	public:
		ZombieEvent(void);
		void setZombieType (string type);
		Zombie* newZombie (string name);
};

#endif