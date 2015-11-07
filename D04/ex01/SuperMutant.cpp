// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:37:49 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:37:50 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const& inst) {
	*this = inst;
	return ;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const& inst) {
	if (this != &inst) {
		this->setHP(inst.getHP());
		this->setType(inst.getType());
	}
	return (*this);
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void SuperMutant::takeDamage(int dmg) {
	this->setHP(this->getHP() - dmg - 3);
	return ;
}
