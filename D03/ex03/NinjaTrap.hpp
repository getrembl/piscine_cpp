// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:05:16 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:05:21 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap{
public:
	NinjaTrap( std::string N );
	NinjaTrap (NinjaTrap const & src);
	NinjaTrap( void );
	~NinjaTrap( void );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );

	void	ninjaShoeBox( ClapTrap const & target );
	void	ninjaShoeBox( FragTrap const & target );
	void	ninjaShoeBox( ScavTrap const & target );
	NinjaTrap & operator=( NinjaTrap const & rhs);
};

std::ostream &operator<<( std::ostream & o, NinjaTrap const & i);

#endif

// ************************************************************************** //
