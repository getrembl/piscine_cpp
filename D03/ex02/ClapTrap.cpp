// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 16:58:49 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 16:59:42 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( std::string N, int itPoints ,int axHitPoints, int nergy, int axEnergy , int evel, int eleeAtackDamage, int angeAtackDamage, int rmorDamageReduce) : _name ( N ), _hitPoints( itPoints ), _maxHitPoints( axHitPoints ), _energy( nergy ), _maxEnergy( axEnergy ), _level( evel ), _meleeAtackDamage( eleeAtackDamage ), _rangeAtackDamage( angeAtackDamage ), _armorDamageReduce( rmorDamageReduce )  {
	std::cout << "I 'm a ClapTrap " << getName() << std::endl;
	return ;
}

ClapTrap::ClapTrap( void ) {

	this->_name = "default ";
	this->_hitPoints = 10;
	this->_maxHitPoints = 10;
	this->_energy = 10;
	this->_maxEnergy = 10;
	this->_level = 10;
	this->_meleeAtackDamage = 100;
	this->_rangeAtackDamage = 10;
	this->_armorDamageReduce = 10;

return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	*this = src;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoint();
		this->_maxHitPoints = rhs.getMaxHitPoint();
		this->_energy = rhs.getEnergy();
		this->_maxEnergy = rhs.getMaxEnergy();
		this->_level = rhs.getLevel();
		this->_meleeAtackDamage = rhs.getMelee();
		this->_rangeAtackDamage = rhs.getRange();
		this->_armorDamageReduce = rhs.getArmor();
	}
	return *this;
}

// ************************************************************************** //

void ClapTrap::rangedAttack( std::string const & target ) {
	std::cout << _name << " attacks " << target << " at range, causing  " <<  _rangeAtackDamage << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at melee, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	setHitPoint( amount, -1 );
	if (_hitPoints >= 0)
		std::cout << getName() << " take " << amount << "  points of damage !" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	setHitPoint( amount , 1 );
	std::cout << getName() << " be Repaired at " << amount << " Point his HP is " << getHitPoint() << std::endl;
}


// ********************************GET*************************************** //

std::string ClapTrap::getName( void ) const {
	return this->_name;
}

int ClapTrap::getMelee( void ) const {
	return this->_meleeAtackDamage;
}

int ClapTrap::getRange( void ) const {
	return this->_rangeAtackDamage;
}

int ClapTrap::getArmor( void ) const {
	return this->_armorDamageReduce;

}

int ClapTrap::getHitPoint( void ) const {
	return this->_hitPoints;
}

int ClapTrap::getMaxHitPoint( void ) const {
	return this->_maxHitPoints;
}

int ClapTrap::getEnergy( void ) const {
	return this->_energy;
}

int ClapTrap::getMaxEnergy( void ) const {
	return this->_maxEnergy;
}

int ClapTrap::getLevel( void ) const {
	return this->_level;
}

// ********************************SET*************************************** //

void ClapTrap::setName( std::string N ) {
	this->_name = N;
}

void ClapTrap::setMelee( int x ) {
	this->_meleeAtackDamage = x;
}
void ClapTrap::setRange( int x ) {
	this->_rangeAtackDamage = x;
}

void ClapTrap::setArmor( int x ) {
	this->_armorDamageReduce = x;
}

void ClapTrap::setHitPoint( unsigned int x , int i) {
	if (_hitPoints == 0 && _level == 1)
		std::cout << " You've already killed me what do you want now ? PLEASE stop this " << std::endl;
	else if (i < 0) {
		if ( this->_hitPoints - (int)x <= 0 ){
			this->_hitPoints = 0;
			if (_level > 1 )
			{
				_level -= 1;
				_hitPoints = _maxHitPoints;
			}
				else
				std::cout <<std::endl << _name  << " Says :  I'm dead now let me alone PLEASE " << std::endl;
		}
		else
			this->_hitPoints -= x;
	}
	else {
		if (this->_hitPoints + (int)x > _maxHitPoints)
		{
			this->_hitPoints = _maxHitPoints;
			_level += 1;
		}
		else
			this->_hitPoints += x;
	}
}

void ClapTrap::setMaxHitPoint( int x ) {
	this->_maxHitPoints = x;
}

void ClapTrap::setEnergy( int x ) {
	this->_energy = x;
}

void ClapTrap::setMaxEnergy( int x ) {
	this->_maxEnergy = x;
}

void ClapTrap::setLevel( int x ) {
	this->_level = x;
}

// ************************************************************************** //

ClapTrap::~ClapTrap( void ) {
	return ;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i ) {
	o << i.getName();
	return o;
}

// ************************************************************************** //
