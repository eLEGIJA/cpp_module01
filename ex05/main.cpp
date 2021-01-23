/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:54:20 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 20:55:03 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

using   std::cout;
using   std::endl;

int main(void){
	Human   bob;
	cout << bob.identify() << endl;
	cout << bob.getBrain().identify() << endl;
}