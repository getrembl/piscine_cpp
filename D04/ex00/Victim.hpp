// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:50:29 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:50:30 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>

class Victim {
public:

	Victim ( std::string N );
	Victim( void );
	Victim( Victim const & src );
	~Victim( void );

	void	setName( std::string N );
	std::string getName( void ) const ;
	Victim & operator=( Victim const & rhs );

protected:
	std::string _name;
};
std::ostream & operator<<( std::ostream & o, Victim const & i);
#endif
