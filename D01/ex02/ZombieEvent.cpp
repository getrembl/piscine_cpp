// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:17:54 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:18:00 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent( void ) {
	std::cout << "Constructed Zoombie Event call" << std::endl;
	return ;
}

Zombie* ZombieEvent::newZombie( std::string name ) {
	Zombie* zombe = new Zombie(name);
	return zombe;
}

void  ZombieEvent::setZombieType( Zombie* Zombe, std::string type ) {
	std::cout << "Zombie Type set to " << type << std::endl;
	Zombe->setType(type);
}
ZombieEvent::~ZombieEvent( void ) {
	std::cout << "Destructed Zoombie Event call" << std::endl;
	return ;

}
// ************************************************************************** //
