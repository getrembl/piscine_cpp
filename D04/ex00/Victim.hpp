// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 10:55:47 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 16:43:30 by sdurr            ###   ########.fr       //
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
