// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:33:44 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:33:49 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
class Weapon {

public:
	Weapon( std::string weapon );
	~Weapon( void );
	std::string	getType( void ) const;
	void		setType( std::string type );

private:
	std::string _type;
};
#endif

// ************************************************************************** //
