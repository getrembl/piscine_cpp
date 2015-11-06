// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:30:17 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:30:25 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) {
	Zombie::_type = "dormeur";
	setName(name);
	std::cout << "Zombie " << getName() << " created" << std::endl;
	return;
}

Zombie::Zombie( void ) {
	Zombie::_type = "dormeur";
	return ;
}

std::string	Zombie::getName( void ) const {
	return this->_name;
}

void Zombie::announce( void ) const {
	std::cout << "< " << getName() << " (" << Zombie::_type;
	std::cout << ") > Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType( std::string type ) {
	Zombie::_type = type;
}

void Zombie::setName( std::string name ) {
	Zombie::_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie died" << std::endl;
	return ;
}
// ************************************************************************** //
