/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:27:45 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/23 23:32:14 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

using   std::string;
using   std::ofstream;
using   std::ifstream;
using   std::cout;
using   std::endl;
using   std::getline;

string	replace(string buff, string s1, string s2) {

	size_t      pos = 0;
	
	while ((pos = buff.find(s1, pos)) != string::npos)
		buff.replace(pos, s1.length(), s2);
	return (buff);

}

void		file_write(string filename, string buff) {
	
	ofstream    fout;

	fout.open(filename + ".replace");
	if (fout.fail())
	{
		cout << "Can't create *.replace file" << endl;
		exit (0);
	}
	fout << buff;
	fout.close();
	
}

string	file_read(string filename, string buff) {
	
	ifstream    fin(filename);
	string      append;

	if(fin.fail())
	{
		cout << "Can't open file" << endl;
		exit (0);
	}
	while (getline(fin, append) && !fin.eof()) {
		buff += append + '\n';
	}
	buff += append;
	fin.close();
	return (buff);
}

int			main(int ac, char **av){

	string      fname;
	string      buff;

	if (ac != 4)
	{
		cout << "Wrong number of arguments" << endl;
		exit (0);
	}
	if (av[2][0] == 0 || av[3][0] == 0)
	{
		cout << "String is empty" << endl;
		exit (0);
	}
	buff = file_read(av[1], buff);
	buff = replace(buff, av[2], av[3]);
	file_write(av[1], buff);
	return(0);
}