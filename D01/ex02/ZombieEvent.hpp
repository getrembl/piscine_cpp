// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:28:32 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:28:42 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {

public:

	ZombieEvent( void );
	~ZombieEvent( void );

	void setZombieType(Zombie* Zombe, std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump( void );

};

#endif
// ************************************************************************** //
