// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ninjatrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 15:18:32 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 10:34:10 by sdurr            ###   ########.fr       //
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
