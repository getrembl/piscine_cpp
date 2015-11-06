// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 09:26:04 by sdurr             #+#    #+#             //
//   Updated: 2015/06/17 15:13:26 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS
# define FIXED_CLASS

# include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( Fixed const & src );

	~Fixed( void );
	Fixed & operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	int getNbBits( void ) const;



private:
	int _fixed;
	int const  _bits;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
