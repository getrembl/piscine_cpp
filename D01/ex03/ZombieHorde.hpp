// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:06:11 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 15:16:24 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde( int N );
	~ZombieHorde( void );
	void	announce( void );
	void		CreateHorde( int N );
	int nb_zombie;
	Zombie* zombie;
};

#endif
