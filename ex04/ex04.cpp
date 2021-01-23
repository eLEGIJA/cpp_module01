/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:11:07 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 21:56:19 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using   std::string;
using   std::cout;
using std::endl;

int		main(void){
	string str = "HI THIS IS BRAIN";
	string *ptr = &str;
	string &link = str;

	cout << *ptr << endl;
	cout << link << endl;

	return (0);
}