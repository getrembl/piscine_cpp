// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 13:32:56 by sdurr             #+#    #+#             //
//   Updated: 2015/06/20 13:32:56 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class	Enemy {

private:
	int _hp;
	std::string _type;

public:
	Enemy(int hp, std::string const & type);

	Enemy(void);
	Enemy(Enemy const&);
	Enemy &	operator=(Enemy const&);
	virtual ~Enemy(void);

	std::string const & getType() const;
	int getHP() const;
	void setType(std::string const & type);
	void setHP(int hp);

	virtual void takeDamage(int);
};

#endif
