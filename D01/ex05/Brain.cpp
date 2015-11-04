// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:51:00 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 17:31:27 by sdurr            ###   ########.fr       //
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
