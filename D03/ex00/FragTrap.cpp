// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 16:51:43 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 16:53:16 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string N ) : _hitPoints( 100 ), _maxHitPoints( 100 ), _energy( 100 ), _maxEnergy( 100 ), _level( 1 ), _name( N ), _meleeAtackDamage( 30 ), _rangeAtackDamage( 20 ), _armorDamageReduce( 5 ) {
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) {
	*this = src;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	if ( this != &rhs ) {
		this->_hitPoints = rhs.getHitPoint();
		this->_maxHitPoints = rhs.getMaxHitPoint();
		this->_energy = rhs.getEnergy();
		this->_maxEnergy = rhs.getMaxEnergy();
		this->_level = rhs.getLevel();
		this->_name = rhs.getName();
		this->_meleeAtackDamage = rhs.getMelee();
		this->_rangeAtackDamage = rhs.getRange();
		this->_armorDamageReduce = rhs.getArmor();
	}
	return *this;
}

// ************************************************************************** //

void		FragTrap::rangedAttack( std::string const & target ) {
	std::cout << _name << " attacks " << target << " at range, causing  " <<  _rangeAtackDamage << " points of damage !" << std::endl;
}

void		FragTrap::meleeAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at melee, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void		FragTrap::footAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at foot, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void		FragTrap::blablaAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at blabla, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void		FragTrap::beatchAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at beatch, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void		FragTrap::takeDamage( unsigned int amount ) {
	setHitPoint( amount, -1 );
	if (_hitPoints > 0)
		std::cout << getName() << " take " << amount << "  points of damage !" << std::endl;
}

void		FragTrap::beRepaired( unsigned int amount ) {
	setHitPoint( amount , 1 );
		std::cout << getName() << " be Repaired at " << amount << " Point his HP is " << getHitPoint() << std::endl;
}

void		FragTrap::vaulhunter_dot_exe( std::string const & target ) {
	if (_energy >= 25) {
		int i = rand() % 10;
		if (i > 5)
			i /= 2;
		if ( i == 1)
			meleeAttack( target );
		else if ( i == 2)
			rangedAttack( target );
		else if (i == 3)
			blablaAttack( target );
		else if (i == 4 )
			footAttack( target );
		else
			beatchAttack( target );
		_energy -= 25;
	}
	else
		std::cout << "You don't have enough energy's Points" << std::endl;
}

// ********************************GET*************************************** //

std::string	FragTrap::getName( void ) const {
	return this->_name;
}

int			FragTrap::getMelee( void ) const {
	return this->_meleeAtackDamage;
}

int			FragTrap::getRange( void ) const {
	return this->_rangeAtackDamage;
}

int			FragTrap::getArmor( void ) const {
	return this->_armorDamageReduce;

}

int			FragTrap::getHitPoint( void ) const {
	return this->_hitPoints;
}

int			FragTrap::getMaxHitPoint( void ) const {
	return this->_maxHitPoints;
}

int			FragTrap::getEnergy( void ) const {
	return this->_energy;
}

int			FragTrap::getMaxEnergy( void ) const {
	return this->_maxEnergy;
}

int			FragTrap::getLevel( void ) const {
	return this->_level;
}

// *****************************SET****************************************** //

void		FragTrap::setName( std::string N ) {
	this->_name = N;
}

void		FragTrap::setMelee( int x ) {
	this->_meleeAtackDamage = x;
}
void		FragTrap::setRange( int x ) {
	this->_rangeAtackDamage = x;
}

void		FragTrap::setArmor( int x ) {
	this->_armorDamageReduce = x;
}

void		FragTrap::setHitPoint( unsigned int x , int i) {
	if (_hitPoints == 0 && _level == 1)
		std::cout << " You've already killed me what do you want now ? PLEASE stop this " << std::endl;
	else if (i <= 0) {
		if ( this->_hitPoints - (int)x <= 0 ){
			this->_hitPoints = 0;
			if (_level > 1 ){
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

void		FragTrap::setMaxHitPoint( int x ) {
	this->_maxHitPoints = x;
}

void		FragTrap::setEnergy( int x ) {
	if ( x > getMaxEnergy())
		this->_energy = getMaxEnergy();
	else {
		this->_energy = x; }
}

void		FragTrap::setMaxEnergy( int x ) {
	this->_maxEnergy = x;
}

void		FragTrap::setLevel( int x ) {
	this->_level = x;
}

// ************************************************************************** //

FragTrap::~FragTrap( void ) {
	std::cout << getName() << ": good Bye " << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & i ) {
	o << i.getName();
	return o;
}

// ************************************************************************** //
