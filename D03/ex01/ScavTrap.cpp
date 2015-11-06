// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 16:47:03 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 15:28:50 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"



ScavTrap::ScavTrap( std::string N ) : _hitPoints( 100 ), _maxHitPoints( 100 ), _energy( 50 ), _maxEnergy( 50 ), _level( 1 ), _name( N ), _meleeAtackDamage( 20 ), _rangeAtackDamage( 15 ), _armorDamageReduce( 3 ) {
	std::cout << "I 'm a ScavTrap " << getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap( void ) : _hitPoints( 100 ), _maxHitPoints( 100 ), _energy( 50 ), _maxEnergy( 50 ), _level( 1 ), _name( " name" ), _meleeAtackDamage( 20 ), _rangeAtackDamage( 15 ), _armorDamageReduce( 3 ) {
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	*this = src;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
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

/********************************************************************************/

void	ScavTrap::rangedAttack( std::string const & target ) {
	std::cout << _name << " ScavTrap attacks " << target << " at range, causing  " <<  _rangeAtackDamage << " points of damage ! More FragTrag ;) " << std::endl;
}

void	ScavTrap::meleeAttack( std::string const & target ) {
	std::cout << getName() << " ScavTrap attacks " << target << " at melee, causing  " <<  getMelee() << " points of damage ! More FragTrap ;) " << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount ) {
	setHitPoint( amount, -1 );
	if (_hitPoints >= 0)
		std::cout << getName() << " take " << amount << "  points of damage !" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	setHitPoint( amount , 1 );
	std::cout << getName() << " be Repaired at " << amount << " Point his HP is " << getHitPoint() << std::endl;
}
void	ScavTrap::challengeDanse( std::string const & target ) const {
	std::cout << getName() << "  Danse with " << target << " on the dancefloar check your body " << std::endl;
}

void	ScavTrap::challengeVote( std::string const &target ) const {
	std::cout << getName() << "  go to show at " << target << " how vote on htpp://achete-une-poutres.com " << std::endl;
}

void	ScavTrap::challengecuicui( std::string const &target ) const {
	std::cout << getName() << "  killed more cuicui than  " << target  << std::endl;
}

void	ScavTrap::challengetoto( std::string const &target ) const {
	std::cout << getName() << "  raconte de meilleur blague que " << target << std::endl;
}

void	ScavTrap::challengebebe( std::string const &target ) const {
	std::cout << getName() << "  change more diaper than " << target << std::endl;
}

void	ScavTrap::challengeNewComer( std::string const & target ) {
	if (_energy >= 25) {
		int i = rand() % 10;
		if (i > 5)
			i /= 2;
		if ( i == 1)
			challengeDanse( target );
		else if ( i == 2)
			challengecuicui( target );
		else if (i == 3)
			challengebebe( target );
		else if (i == 4 )
			challengetoto( target );
		else
			challengeVote( target );
		_energy -= 25;
	}
	else
		std::cout << "You don't have enough energy's Points" << std::endl;
}

/*************************Get************************************/
std::string	ScavTrap::getName( void ) const {
	return this->_name;
}

int	ScavTrap::getMelee( void ) const {
	return this->_meleeAtackDamage;
}

int	ScavTrap::getRange( void ) const {
	return this->_rangeAtackDamage;
}

int	ScavTrap::getArmor( void ) const {
	return this->_armorDamageReduce;

}

int	ScavTrap::getHitPoint( void ) const {
	return this->_hitPoints;
}

int	ScavTrap::getMaxHitPoint( void ) const {
	return this->_maxHitPoints;
}

int	ScavTrap::getEnergy( void ) const {
	return this->_energy;
}

int	ScavTrap::getMaxEnergy( void ) const {
	return this->_maxEnergy;
}

int	ScavTrap::getLevel( void ) const {
	return this->_level;
}

/***********************************SET****************************/
void	ScavTrap::setName( std::string N ) {
	this->_name = N;
}

void	ScavTrap::setMelee( int x ) {
	this->_meleeAtackDamage = x;
}
void	ScavTrap::setRange( int x ) {
	this->_rangeAtackDamage = x;
}

void	ScavTrap::setArmor( int x ) {
	this->_armorDamageReduce = x;
}

void	ScavTrap::setHitPoint( unsigned int x , int i) {
	if (_hitPoints == 0 && _level == 1)
		std::cout << " You've already killed me what do you want now ? PLEASE stop this " << std::endl;
	else if (i < 0) {
		if ( this->_hitPoints - (int)x <= 0 ){
			this->_hitPoints = 0;
			if (_level > 1 )
			{
				_level -= 1;
				_energy = _maxEnergy;
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

void	ScavTrap::setMaxHitPoint( int x ) {
	this->_maxHitPoints = x;
}

void	ScavTrap::setEnergy( int x ) {
	this->_energy = x;
}

void	ScavTrap::setMaxEnergy( int x ) {
	this->_maxEnergy = x;
}

void	ScavTrap::setLevel( int x ) {
	this->_level = x;
}

/************************************************************************/
ScavTrap::~ScavTrap( void ) {
	std::cout << getName() << ": Blablabla je m'en vais " << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & i ) {
	o << i.getName();
	return o;
}
