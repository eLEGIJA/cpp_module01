/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:55:18 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 20:55:56 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using   std::string;
using   std::stringstream;

Brain::Brain(void){
}

string Brain::identify(void) const{
	stringstream oss;
	oss << this;
	return (oss.str());
}

Brain::~Brain(void){
}