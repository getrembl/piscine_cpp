// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:32:47 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:32:48 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){
	return ;
}

Enemy::Enemy(void) {
	return ;
}

Enemy::Enemy(Enemy const& inst) {
	*this = inst;
	return ;
}

Enemy &	Enemy::operator=(Enemy const& inst) {
	if (this != &inst) {
		this->_hp = inst.getHP();
		this->_type = inst.getType();
	}
	return (*this);
}

Enemy::~Enemy(void) {
	;
}

void Enemy::takeDamage(int dmg) {
	this->_hp -= dmg;
	return ;
}

std::string const & Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

void Enemy::setType(std::string const & type) {
	this->_type = type;
	return ;
}

void Enemy::setHP(int hp) {
	this->_hp = hp;
	return ;
}
