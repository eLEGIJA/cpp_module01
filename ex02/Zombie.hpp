/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:40:19 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/17 18:27:26 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

using	std::string;

class Zombie {
	private:
		string	type;
		string	name;

	public:
		void	Zombie_res(string type, string name);
		void	announce(void);
};

#endif