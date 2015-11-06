// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/02 12:16:19 by getrembl          #+#    #+#             //
//   Updated: 2015/11/03 15:56:08 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <algorithm>
#include <string>

int				main(int argc, char *argv[])
{
	int			i;
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i])
		{
			str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			i++;
			if (argv[i])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
}

//****************************************************************************//
