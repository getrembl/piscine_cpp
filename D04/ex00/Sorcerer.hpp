// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:50:02 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:50:04 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class  Sorcerer {

public:
	Sorcerer( void );
	Sorcerer( std::string N , std::string M);
	Sorcerer ( Sorcerer const & src );

	Sorcerer & operator=( Sorcerer const & rhs );

	std::string getName( void ) const;
	std::string getType( void ) const;

	void		polymorph( Victim const & man ) const;
	void		polymorph( Peon const & man ) const;
	~Sorcerer( void );

protected:
	std::string _name;
	std::string _type;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
