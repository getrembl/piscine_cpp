// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:30:47 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:30:53 by getrembl         ###   ########.fr       //
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

// ************************************************************************** //
