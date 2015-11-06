// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:32:14 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:32:26 by getrembl         ###   ########.fr       //
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

// ************************************************************************** //
