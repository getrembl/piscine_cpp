// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 11:57:51 by sdurr             #+#    #+#             //
//   Updated: 2015/06/17 21:15:25 by sdurr            ###   ########.fr       //
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
