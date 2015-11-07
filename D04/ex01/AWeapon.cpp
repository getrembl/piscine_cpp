// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:31:39 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:31:40 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	this->_name = name;
	this-> _apcost = apcost;
	this-> _damage = damage;
}

AWeapon::AWeapon(void) {
	;
}

AWeapon::AWeapon(AWeapon const& inst) {
	*this = inst;
	return ;
}

AWeapon &	AWeapon::operator=(AWeapon const& inst) {
	if (this != & inst) {
		this->_name = inst.getName();
		this-> _apcost = inst.getAPCost();
		this-> _damage = inst.getDamage();
	}
	return (*this);
}

AWeapon::~AWeapon(void) {
	;
}

std::string const & AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getAPCost() const {
	return this->_apcost;
}

int AWeapon::getDamage() const {
	return this->_damage;
}

void AWeapon::setName(std::string const & name) {
	this->_name = name;
}

void AWeapon::setAPCost(int apcost) {
	this->_apcost = apcost;
}

void AWeapon::setDamage(int damage) {
	this->_damage = damage;
}
