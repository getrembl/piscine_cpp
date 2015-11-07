// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:05:03 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:05:08 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap( std::string N );
	FragTrap (FragTrap const & src);
	FragTrap( void );
	~FragTrap( void );

	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	vaulhunter_dot_exe( std::string const & target );
	void	footAttack( std::string const & target );
	void	blablaAttack( std::string const & target );
	void	beatchAttack( std::string const & target );

	FragTrap & operator=( FragTrap const & rhs);

};

std::ostream &operator<<( std::ostream & o, FragTrap const & i);

#endif

// ************************************************************************** //
