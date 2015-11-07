// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:30:15 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:30:32 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {

public:

	Brain( void );
	~Brain( void );
	std::string identiffy( void );

private:
	std::string _adresse;
};


#endif

// ************************************************************************** //
