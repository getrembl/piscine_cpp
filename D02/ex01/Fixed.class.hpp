// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 16:11:04 by getrembl          #+#    #+#             //
//   Updated: 2015/11/06 16:11:15 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS
# define FIXED_CLASS

# include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( int nb );
	Fixed( float nb );
	Fixed( Fixed const & src );

	~Fixed( void );
	Fixed & operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	int getNbBits( void ) const;
	int toInt( void ) const;
	float toFloat( void ) const;

private:
	int _fixed;
	int const  _bits;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif

// ************************************************************************** //
