// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:33:52 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:33:52 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon {

public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const&);
	PlasmaRifle &	operator=(PlasmaRifle const&);
	~PlasmaRifle(void);

	void attack() const;
};

#endif
