// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:08:03 by sdurr             #+#    #+#             //
//   Updated: 2015/06/17 21:17:45 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

int main( void )
{
	srand(time(NULL));
	int i = rand() % 10;
	std::cout << "Create Zombie Horde " << std::endl;
	ZombieHorde zombe(i);
	zombe.announce();
	return 0;
}
