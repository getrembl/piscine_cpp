// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 18:49:15 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 21:40:14 by sdurr            ###   ########.fr       //
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
