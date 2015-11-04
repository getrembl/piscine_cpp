// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:51:17 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 17:36:11 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include "Brain.hpp"

Human::Human( void ) {
	return ;
}
Brain  Human::getBrain( void ) {
	return this->i;
}

std::string Human::identify( void ) {
	return i.identiffy();
}
Human::~Human( void ) {
	return ;
}
