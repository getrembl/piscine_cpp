// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:34:04 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:34:05 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power PowerFist", 8, 50){
	return ;
}

PowerFist::PowerFist(PowerFist const& inst) {
	*this = inst;
	return ;
}

PowerFist &	PowerFist::operator=(PowerFist const& inst) {
	if (this != &inst) {
		this->setName(inst.getName());
		this->setAPCost(inst.getAPCost());
		this->setDamage(inst.getDamage());
	}
	return (*this);
}

PowerFist::~PowerFist(void) {
	;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
