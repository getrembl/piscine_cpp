// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:49:09 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:49:18 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon( void ) : Victim::Victim() {
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( std::string N) : Victim::Victim( N ){
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( Peon const & src ) : Victim::Victim( src ){
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon & Peon::operator=( Peon const & rhs ){
	if ( this != &rhs )
		setName(rhs.getName());
	return *this;
}
Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}

// ************************************************************************** //
