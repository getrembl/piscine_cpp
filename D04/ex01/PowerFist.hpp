// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:34:16 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:34:17 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class	PowerFist : public AWeapon {

public:
	PowerFist(void);
	PowerFist(PowerFist const&);
	PowerFist &	operator=(PowerFist const&);
	~PowerFist(void);

	void attack() const;
};

#endif
