// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Scavtrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 15:18:32 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 16:09:14 by sdurr            ###   ########.fr       //
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
