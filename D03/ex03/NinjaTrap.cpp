// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:04:38 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:04:53 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap( std::string N ) : ClapTrap ( N, 60, 60, 120, 120, 1, 60, 5, 0){
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_level = 1;
	this->_meleeAtackDamage = 60;
	this->_rangeAtackDamage = 5;
	this->_armorDamageReduce = 0;
	return ;
}

NinjaTrap::NinjaTrap( void ) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_level = 1;
	this->_name = "name";
	this->_meleeAtackDamage = 60;
	this->_rangeAtackDamage = 5;
	this->_armorDamageReduce = 0;
	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
	*this = src;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs ) {
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

void	NinjaTrap::rangedAttack( std::string const & target ) {
	std::cout << _name << " NinjaTrap attacks " << target << " at range, causing  " <<  _rangeAtackDamage << " points of damage ! More FragTrag ;) " << std::endl;
}

void	NinjaTrap::meleeAttack( std::string const & target ) {
	std::cout << getName() << " NinjaTrap attacks " << target << " at melee, causing  " <<  getMelee() << " points of damage ! More FragTrap ;) " << std::endl;
}

void	NinjaTrap::ninjaShoeBox( ClapTrap const & target ) {
	std::cout << " ClapTrap boueeeeeeeeeeeeeeeeeeee pas assez rapide " << target.getName() << " Pour Super ninja " <<  std::endl;
}

void	NinjaTrap::ninjaShoeBox( FragTrap const & target ) {
	std::cout << "FragTrap " << target.getName() << " Pas aussi fort que Ninja Super mega force " << std::endl;
}

void	NinjaTrap::ninjaShoeBox( ScavTrap const & target ) {
	std::cout << "Scav blalabla " << target.getName() << " T'es nul meme tchoupi tape plus fort que toi " << std::endl;
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << " NINJA va dormir dans un arbre " << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, NinjaTrap const & i ) {
	o << i.getName();
	return o;
}

// ************************************************************************** //
