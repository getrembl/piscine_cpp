// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:50:20 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:50:20 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim( std::string N) : _name( N ) {
	std::cout << "Some random victim call " << getName() << " just popped !" << std::endl;
	return ;
}

Victim::Victim( void ) {
	setName( "default" );
}

Victim::Victim( Victim const & src ) {
		*this = src;
}

std::string Victim::getName( void ) const {
	return this->_name;
}

void Victim::setName( std::string N ) {
	setName( N );
}

Victim & Victim::operator=(Victim const & rhs ) {
	if (this != &rhs)
		this->_name = rhs.getName();
	return *this;
}

Victim::~Victim( void ) {
	std::cout << "Victim " << getName() << " died for no aparent reason !" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Victim const & i ) {

	o << "I'm ";
	o << i.getName();
	o << "and i liked otters !\n";
	return o;
}
