// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 10:56:19 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 09:06:14 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
public:
	Peon( void );
	Peon( std::string N );
	Peon( Peon const & src );
	~Peon( void );
	Peon & operator=(Peon const & rhs );
};

#endif
