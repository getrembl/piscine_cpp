// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:33:13 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:33:19 by getrembl         ###   ########.fr       //
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

// ************************************************************************** //
