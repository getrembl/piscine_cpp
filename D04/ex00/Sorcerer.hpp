// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 10:54:26 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 12:05:17 by sdurr            ###   ########.fr       //
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
