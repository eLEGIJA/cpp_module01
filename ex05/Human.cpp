/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:01:05 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 21:05:19 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

using   std::string;

Human::Human(void) 
{
}

string Human::identify(void) const{
	return (this->brain.identify());
}

const Brain& Human::getBrain(void){
	const Brain& link = this->brain;
	return (link);
}

Human::~Human(void) 
{
}