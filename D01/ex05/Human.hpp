// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:51:28 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 17:38:08 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
#include "Brain.hpp"
class Human {
	Brain i;

public:
	Human( void );
	~Human( void );
	Brain getBrain( void );
	std::string identify( void );

};

#endif
