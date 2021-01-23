/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:59:57 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 20:05:28 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde{
	private:
		Zombie* horde;
		int		count;

	public:
		ZombieHorde(int n);
		void announce(void);
		~ZombieHorde(void);
};

#endif