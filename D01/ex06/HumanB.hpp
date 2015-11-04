// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 18:49:37 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 21:39:32 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"
class HumanB {

public:
	HumanB( std::string name);
	~HumanB( void );
	void attack( void );
	std::string getName( void ) const;
	std::string getWeapon( void ) const;
	void setWeapon( Weapon &weapon );
	std::string _name;

private:
	Weapon*  _weapon;
};

#endif
