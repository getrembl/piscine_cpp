// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:32:19 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:32:20 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _currWeap(NULL) {
	return ;
}

Character::Character(void) {
	return ;
}

Character::Character(Character const & inst) {
	*this = inst;
	return ;
}

Character & Character::operator=(Character const & inst) {
	if (this != &inst) {

	}
	return (*this);
}

Character::~Character(void) {
	return ;
}

void Character::recoverAP() {
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	return ;
}

void Character::equip(AWeapon * currWeap) {
	this->_currWeap = currWeap;
	return ;

}

void Character::attack(Enemy * target) {
	if (this->_currWeap == NULL)
		return;
	if (this->_ap - this->_currWeap->getAPCost() <= 0)
		return ;
	else if (this->_ap < 0) {
		this->_ap = 0;
		return ;
	}
	this->_ap -= this->_currWeap->getAPCost();
	target->takeDamage(this->_currWeap->getDamage());
	std::cout << this->_name << " attacks " << target->getType() << " with a " << this->_currWeap->getName() << std::endl;
	this->_currWeap->attack();
	if (target->getHP() <= 0)
		delete target;
	return ;
}

std::string const & Character::getName() const {
	return this->_name;
}

int Character::getAP() const {
	return this->_ap;
}

AWeapon* Character::getCurrWeap() const {
	return this->_currWeap;
}

void Character::setName(std::string const & name) {
	this->_name = name;
	return ;
}

void Character::setAP(int ap) {
	this->_ap = ap;
	return ;
}

void Character::setCurrWeapon(AWeapon* currWeap) {
	this->_currWeap = currWeap;
	return ;
}

std::ostream & operator<<(std::ostream & o, Character const & inst) {
	if (inst.getCurrWeap() != NULL )
		o << inst.getName() << " has " << inst.getAP() << " AP and wields a " << inst.getCurrWeap()->getName() << std::endl;
	else
		o << inst.getName() << " has " << inst.getAP() << " AP and is unarmed" << std::endl;
	return o;
}
