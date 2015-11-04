// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 18:48:09 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 21:35:56 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	return ;
}

std::string HumanA::getWeapon( void ) const {
	return this->_weapon.getType();
}

void  HumanA::setWeapon( Weapon &weapon ) {
	this->_weapon = weapon;
}

std::string HumanA::getName( void ) const {
	return this->_name;
}

void		HumanA::attack( void ) {
	std::cout << getName() << " attacks with his " << getWeapon() << std::endl;
}

HumanA::~HumanA( void ) {
	return;
}
