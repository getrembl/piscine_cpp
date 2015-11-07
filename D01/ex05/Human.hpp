// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:31:02 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:31:08 by getrembl         ###   ########.fr       //
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

// ************************************************************************** //
