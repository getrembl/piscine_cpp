// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 16:50:57 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 16:53:48 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap {
public:
	FragTrap( std::string N );
	FragTrap (FragTrap const & src);
	~FragTrap( void );

	std::string getName( void ) const;
	int			getMelee( void ) const;
	int			getRange( void ) const;
	int			getArmor( void ) const;
	int			getHitPoint( void ) const;
	int			getMaxHitPoint( void ) const;
	int			getEnergy( void ) const;
	int			getMaxEnergy( void ) const;
	int			getLevel( void ) const;

	void		setName( std::string N);
	void		setMelee( int x );
	void		setRange( int x );
	void		setArmor( int x );
	void		setHitPoint( unsigned int x , int i);
	void		setMaxHitPoint( int x );
	void		setEnergy( int x );
	void		setMaxEnergy( int x );
	void		setLevel( int x );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );

	void	footAttack( std::string const & target );
	void	blablaAttack( std::string const & target );
	void	beatchAttack( std::string const & target );

	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	void	vaulhunter_dot_exe( std::string const & target );

	FragTrap & operator=( FragTrap const & rhs);

private:
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

std::ostream &operator<<( std::ostream & o, FragTrap const & i);

#endif

// ************************************************************************** //
