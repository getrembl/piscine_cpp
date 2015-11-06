// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 15:14:49 by getrembl          #+#    #+#             //
//   Updated: 2015/11/06 15:14:54 by getrembl         ###   ########.fr       //
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

// ************************************************************************** //
