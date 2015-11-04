// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: karakhirn <marvin@42.fr>                   +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 16:54:33 by karakhirn         #+#    #+#             //
//   Updated: 2015/11/04 16:54:55 by karakhirn        ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony( void ) {
	std::cout << "Constructeur called" << std::endl;
	return;
}

Pony::~Pony( void ) {
	std::cout << "Destructeur called" << std::endl;
	return;
}

// ************************************************************************** //
