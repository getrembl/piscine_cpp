// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:33:19 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:33:24 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("PlasmaRifle", 5, 21) {
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& inst) {
	*this = inst;
	return ;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const& inst) {
	if (this != &inst) {
		this->setName(inst.getName());
		this->setAPCost(inst.getAPCost());
		this->setDamage(inst.getDamage());
	}
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void) {
	;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
