// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weappon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 18:45:38 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 21:03:14 by sdurr            ###   ########.fr       //
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
