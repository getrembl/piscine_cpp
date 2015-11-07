// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:32:20 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 18:32:27 by getrembl         ###   ########.fr       //
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
// ************************************************************************** //
