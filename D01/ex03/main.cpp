// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:32:34 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:32:40 by getrembl         ###   ########.fr       //
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
// ************************************************************************** //
