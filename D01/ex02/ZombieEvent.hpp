// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 11:58:26 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 13:33:03 by sdurr            ###   ########.fr       //
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
