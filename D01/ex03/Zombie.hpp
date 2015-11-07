// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:30:37 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:31:36 by getrembl         ###   ########.fr       //
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
// ************************************************************************** //
