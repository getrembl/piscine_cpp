// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:31:59 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:32:07 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde( int N ){
	this->nb_zombie = N;
	this->zombie = new Zombie[this->nb_zombie];
	CreateHorde( N );
	return ;
}

void ZombieHorde::CreateHorde( int N ) {
		srand(time(NULL));
	std::string name[10] = {
		"Stephanie",
		"Geoffroy",
		"Ezio",
		"Thomas",
		"Hubert",
		"Matthieu",
		"Stephane",
		"Clara",
		"Gregory",
		"Aurelien",
	};
	int index = rand() % 10;
	int i;
	i = 0;
	this->nb_zombie = N;
	std::cout << "Create Horde with " << N << " Zombie " << std::endl;
	while (i < N)
	{
		this->zombie[i].setName(name[index]);
		index = rand() % 10;
		i++;
	}
}
void	ZombieHorde::announce( void ) {
	int i = 0;
	std::cout << "Zombie Horde is composed " << std::endl;
	while (i < this->nb_zombie)
	{
		this->zombie[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde( void ){
	delete [] this->zombie;
	return;
}
// ************************************************************************** //
