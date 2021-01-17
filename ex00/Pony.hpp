/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:17:25 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/17 18:27:17 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

using std::string;
using std::cout;
using std::cin;
 
class Pony
{
	private:
		string name;
		string age;

	public:
		Pony()
		{
			cout << "Enter name: ";
			getline(cin, this->name, '\n');
			cout << "Enter age: ";
			getline(cin, this->age, '\n');
		}
		~Pony()
		{
		}
};

#endif