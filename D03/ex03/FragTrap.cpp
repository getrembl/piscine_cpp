// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:04:03 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:04:22 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string N ) : ClapTrap ( N, 100, 100, 100, 100, 1, 30, 20, 5){
	std::cout << "I 'm a FragTrap " << getName() << std::endl;
return ;
}

FragTrap::FragTrap( void ) {
		std::cout << "I 'm a FragTrap " << getName() << std::endl;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 1;
	this->_name = "name";
	this->_meleeAtackDamage = 30;
	this->_rangeAtackDamage = 20;
	this->_armorDamageReduce = 5;
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

void	FragTrap::footAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at foot, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void	FragTrap::blablaAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at blabla, causing  " <<  getMelee() << " points of damage !" << std::endl;
}

void	FragTrap::beatchAttack( std::string const & target ) {
	std::cout << getName() << " attacks " << target << " at beatch, causing  " <<  getMelee() << " points of damage !" << std::endl;
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
		else if ( i == 5 )
			beatchAttack( target );
	}
	else
		std::cout << "You don't have enough energy's Points" << std::endl;
}

// ************************************************************************** //

FragTrap::~FragTrap( void ) {
	std::cout << " It's time to sleep " << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & i ) {
	o << i.getName();
	return o;
}

// ************************************************************************** //
