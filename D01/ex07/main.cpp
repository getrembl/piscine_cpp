// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:46:14 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:46:22 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void			empty(std::string file, std::string s1, std::string s2)
{
	if (file == "" || s1 == "" || s2 == "")
	{
		std::cout << "One of your files is empty>" << std::endl;
		std::exit(0);
	}
}

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong usage :" << std::endl;
		std::cout << "./replace: <file> <string1> <string2>" << std::endl;
		std::exit(0);
	}
	empty(av[1], av[2], av[3]);
	std::string 		file = av[1];
	std::string 		s1 = av[2];
	std::string 		s2 = av[3];
	std::string			tmp;
	std::string 		ret = file + ".replace";
	std::ifstream		ifs(file.c_str());
	std::ofstream		ofs(ret.c_str());

	if (!(ifs.good()))
	{
		std::cout << "./replace: Wrong file" << std::endl;
		std::exit(0);
	}
	while (std::getline(ifs, tmp))
	{
		size_t position = 0;
		while ((position = tmp.find(s1,position)) != std::string::npos)
		{
			tmp.replace(position, s1.length(), s2);
			position += s2.length();
		}
		ofs << tmp << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

// ************************************************************************** //
