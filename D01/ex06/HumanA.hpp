// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 18:48:23 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 21:28:04 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
	void attack( void );
	std::string getName( void ) const;
	std::string getWeapon( void ) const;
	void setWeapon( Weapon &weapon );
	std::string _name;

private:
	Weapon &_weapon;

};

#endif
