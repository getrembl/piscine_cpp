// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:32:27 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:32:27 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACER_HPP
# define CHARACER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {

private:
	std::string _name;
	int _ap;
	AWeapon* _currWeap;

public :
	Character(std::string const & name);

	Character(void);
	Character(Character const &);
	Character & operator=(Character const &);
	virtual ~Character(void);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const & getName() const;
	int getAP() const;
	AWeapon* getCurrWeap() const;

	void setName(std::string const & name);
	void setAP(int ap);
	void setCurrWeapon(AWeapon* currWeap);
};

std::ostream & operator<<(std::ostream & o, Character const & inst);

#endif
