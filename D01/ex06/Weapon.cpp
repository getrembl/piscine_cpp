// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weappon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 18:45:26 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 21:03:34 by sdurr            ###   ########.fr       //
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
