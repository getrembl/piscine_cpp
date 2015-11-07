// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:31:49 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:31:50 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class	AWeapon {

private:
	std::string _name;
	int _damage;
	int _apcost;

public:
	AWeapon(std::string const & name, int apcost, int damage);

	AWeapon(void);
	AWeapon(AWeapon const&);
	AWeapon &	operator=(AWeapon const&);
	virtual ~AWeapon(void);

	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	void setName(std::string const & name);
	void setAPCost(int apcost);
	void setDamage(int damage);
	virtual void attack () const = 0;
};

#endif
