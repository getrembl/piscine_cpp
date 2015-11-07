// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:06:27 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:06:51 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap( std::string N );
	ScavTrap (ScavTrap const & src);
	ScavTrap( void );
	~ScavTrap( void );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	challengeDanse( std::string const & target ) const;
	void	challengeVote( std::string const & target ) const;
	void	challengecuicui( std::string const & target ) const;
	void	challengetoto( std::string const & target ) const;
	void	challengebebe( std::string const & target ) const;

	void	challengeNewComer( std::string const & target );

	ScavTrap & operator=( ScavTrap const & rhs);
};

std::ostream &operator<<( std::ostream & o, ScavTrap const & i);

#endif

// ************************************************************************** //
