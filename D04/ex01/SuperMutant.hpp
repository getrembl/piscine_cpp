// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:38:01 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:38:02 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class	SuperMutant : public Enemy {

public:
	SuperMutant(void);
	SuperMutant(SuperMutant const&);
	SuperMutant &	operator=(SuperMutant const&);
	~SuperMutant(void);

	void takeDamage(int);
};

#endif
