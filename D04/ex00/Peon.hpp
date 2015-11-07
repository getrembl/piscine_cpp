// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:49:44 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:49:44 by getrembl         ###   ########.fr       //
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
