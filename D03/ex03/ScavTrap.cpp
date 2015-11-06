// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 16:47:03 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 16:08:42 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string N ) : ClapTrap( N, 100, 100, 50, 50, 1, 10, 15, 3) {
	std::cout << "I 'm a ScavTrap " << getName() << std::endl;
	this->_name = N;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_level = 1;
	this->_meleeAtackDamage = 10;
	this->_rangeAtackDamage = 15;
	this->_armorDamageReduce = 3;
	return ;
}

ScavTrap::ScavTrap( void ) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_level = 1;
	this->_name = "name";
	this->_meleeAtackDamage = 10;
	this->_rangeAtackDamage = 15;
	this->_armorDamageReduce = 3;
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

ScavTrap::~ScavTrap( void ) {
	std::cout << " Blablabla je m'en vais " << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & i ) {
	o << i.getName();
	return o;
}
