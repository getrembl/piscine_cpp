// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 14:31:57 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 18:23:35 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cstdio>
#include "Contact.class.hpp"

static int		ft_compare(std::string s)
{
	int i;

	i = 0;
	if (s[i] == 'S')
		i++;
	if (s[i] == 'E')
		i++;
	if (s[i] == 'A')
		i++;
	if (s[i] == 'R')
		i++;
	if (s[i] == 'C')
		i++;
	if (s[i] == 'H')
		i++;
	if (s[i] != '\0')
		i++;
	if (i < 6)
		return (-1);
	if (i == 6)
		return (0);
	i = s[i - 1] - 48;
	return (i);
}

int		main( void )
{
	std::string buf;
	Contact	contact[8];
	int i;
	int j;

	i = 0;
	while (!std::cin.eof())
	{
		std::cout << std::endl << "Please enter instruction ADD, SEARCH or EXIT " << std::endl;
		std::cin >> buf;
		std::cin.ignore();
		if (buf == "EXIT")
			return 0;
		else if (buf == "ADD")
		{
			if (i < 8)
			{
				contact[i].set();
				i++;
				std::cout << "Congratulate Contact register !" << std::endl;
			}
			else
				std::cout << "You have already 8 contact." << std::endl;
		}
		else if (ft_compare(buf) == 0)
		{
			j = 0;
			std::cout << std::endl << " | index | First Name | Last Name  |  Nickname  |" << std::endl;
			std::cout << "  ----------------------------------------------" << std::endl;
			while (j < i)
			{
				std::cout << " |  ";
				std::cout << j+1;
				std::cout << "    | ";
				contact[j].search();
				j++;
				std::cout << std::endl;
				std::cout << "  -----------------------------------------------" << std::endl;
			}
			std::cout << std::endl << "Veuillez saisir un index" << std::endl;
			std::getline(std::cin, buf);
			j = buf[0] - 48;
			if (j > 0 && j <= i && buf[7] == '\0')
				contact[j - 1].aff();
			else
				std::cout << "wrong Index";
		}
		else if (buf[0])
			std::cout << "Wrong Command" << std::endl;
	}
	return 0;
}
