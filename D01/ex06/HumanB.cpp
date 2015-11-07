// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:32:54 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:33:04 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name){
	return ;
}

std::string HumanB::getWeapon( void ) const {
	return this->_weapon->getType();
}
void HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}

std::string HumanB::getName( void ) const {
	return this->_name;
}

void		HumanB::attack( void ) {
	std::cout << getName() << " attacks with his " << getWeapon() << std::endl;
}

HumanB::~HumanB( void ) {
	return ;
}

// ************************************************************************** //
