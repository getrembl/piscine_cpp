// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:51:30 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 16:41:52 by sdurr            ###   ########.fr       //
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
