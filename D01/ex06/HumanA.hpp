// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:32:32 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:32:37 by getrembl         ###   ########.fr       //
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

// ************************************************************************** //
