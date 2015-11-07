// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 10:54:33 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 09:02:09 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer( void ) {
	return ;
}

Sorcerer::Sorcerer( std::string N, std::string M ) : _name( N ), _type( M ){
	std::cout << getName() << ", " << getType() << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const & src ) {
	*this = src;
}

std::string Sorcerer::getName( void ) const {
	return this->_name;
}

std::string Sorcerer::getType( void ) const {
	return this->_type;
}

void	Sorcerer::polymorph( Victim const & man ) const {
	std::cout << man.getName() << " has been turned into a cute little sheep !\n";
}

void	Sorcerer::polymorph( Peon const & man ) const {
	std::cout << man.getName() << " has been turned into a pink pony !\n";
}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs ) {
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_name = rhs.getType();
	}
	return *this;
}

Sorcerer::~Sorcerer( void ) {
	std::cout << getName() << ", " << getType() << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
	o << "I'am ";
	o << rhs.getName();
	o << ", ";
	o << rhs.getType();
	o << ", and I like ponies !\n";

	return o;
}
