// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:34:28 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:34:29 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const& inst) {
	*this = inst;
	return ;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const& inst) {
	if (this != & inst) {
		this->setHP(inst.getHP());
		this->setType(inst.getType());
	}
	return (*this);
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
