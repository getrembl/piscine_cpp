// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Scavtrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 15:18:32 by sdurr             #+#    #+#             //
//   Updated: 2015/06/18 19:20:51 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

class ScavTrap {
public:
	ScavTrap( std::string N );
	ScavTrap (ScavTrap const & src);
	ScavTrap( void );
	~ScavTrap( void );

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

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	void	challengeDanse( std::string const & target ) const;
	void	challengeVote( std::string const & target ) const;
	void	challengecuicui( std::string const & target ) const;
	void	challengetoto( std::string const & target ) const;
	void	challengebebe( std::string const & target ) const;

	void	challengeNewComer( std::string const & target );

	ScavTrap & operator=( ScavTrap const & rhs);

protected:
	int _hitPoints;
	int _maxHitPoints;
	int _energy;
	int _maxEnergy;
	int _level;
	std::string _name;
	int _meleeAtackDamage;
	int _rangeAtackDamage;
	int _armorDamageReduce;



};

std::ostream &operator<<( std::ostream & o, ScavTrap const & i);

#endif
