// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:01 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 15:40:51 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
public:
	ClapTrap( std::string N, int itPoints ,int axHitPoints, int nergy, int axEnergy , int evel, int eleeAtackDamage, int angeAtackDamage, int rmorDamageReduce);
	ClapTrap (ClapTrap const & src);
	ClapTrap( void );
	~ClapTrap( void );

	std::string getName( void ) const;
	int getMelee( void ) const;
	int getRange( void ) const;
	int getArmor( void ) const;
	int getHitPoint( void ) const;
	int getMaxHitPoint( void ) const;
	int getEnergy( void ) const;
	int getMaxEnergy( void ) const;
	int getLevel( void ) const;

	void setName( std::string N);
	void setMelee( int x );
	void setRange( int x );
	void setArmor( int x );
	void setHitPoint( unsigned int x , int i);
	void setMaxHitPoint( int x );
	void setEnergy( int x );
	void setMaxEnergy( int x );
	void setLevel( int x );

	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void vaulhunter_dot_exe( std::string const & target );

	ClapTrap & operator=( ClapTrap const & rhs);

protected:
	std::string _name;

	int _hitPoints;
	int _maxHitPoints;
	int _energy;
	int _maxEnergy;
	int _level;
	int _meleeAtackDamage;
	int _rangeAtackDamage;
	int _armorDamageReduce;



};

std::ostream &operator<<( std::ostream & o, ClapTrap const & i);

#endif

