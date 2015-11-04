// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 11:57:24 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 14:03:03 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

public:
					Zombie( void );
					~Zombie( void );

					Zombie( std::string name );
	void			announce( void ) const;
	std::string		getName( void ) const;
	void			setType( std::string type);
	void			setName( std::string name);

private :
	std::string		_name;
	std::string		_type;
};

#endif
