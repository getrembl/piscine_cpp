// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:33:30 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:33:36 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string weapon ) {
	setType(weapon);
	return;
}
std::string	Weapon::getType( void ) const {
	return this->_type;
}

void		Weapon::setType( std::string type ) {
	this->_type = type;
}
Weapon::~Weapon( void ) {
	return;
}

// ************************************************************************** //
