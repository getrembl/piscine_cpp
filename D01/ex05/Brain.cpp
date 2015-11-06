// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:29:57 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:30:03 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain( void ) {
	return;
}

std::string Brain::identiffy( void ) {
	std::ostringstream oss;
	oss << this;
	std::string ret;
	ret = oss.str();
	return ret;
}
Brain::~Brain( void ) {
	return;
}

// ************************************************************************** //
