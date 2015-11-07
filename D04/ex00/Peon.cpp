// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 10:56:25 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 09:06:49 by sdurr            ###   ########.fr       //
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
