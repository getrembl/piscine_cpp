// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:34:36 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:34:37 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy {

public:
	RadScorpion(void);
	RadScorpion(RadScorpion const&);
	RadScorpion &	operator=(RadScorpion const&);
	~RadScorpion(void);

};

#endif
