/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:33:42 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/17 18:22:41 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using	std::string;
using	std::cout;
using	std::endl;

void	memoryLeak()
{
	string*	panther = new string("String panther");
	cout << *panther << endl;
	delete panther;
}