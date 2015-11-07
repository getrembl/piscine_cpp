// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 16:12:02 by getrembl          #+#    #+#             //
//   Updated: 2015/11/06 16:12:12 by getrembl         ###   ########.fr       //
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
	bool operator>(Fixed const & rhs);
	bool operator<(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);

	Fixed  operator+(Fixed const & rhs);
	Fixed & operator++( void );
	Fixed  operator++( int n );
	Fixed & operator--( void );
	Fixed  operator--( int n );
	Fixed  operator-(Fixed const & rhs);
	Fixed  operator/(Fixed const & rhs);
	Fixed  operator*(Fixed const & rhs);

	int getRawBits( void ) const;
	int getNbBits( void ) const;
	void setRawbits( int const raw );
	int toInt( void ) const;
	float toFloat( void ) const;
	static Fixed & max(Fixed & a, Fixed  & b);
	static const  Fixed & max(Fixed const & a, Fixed const & b);
	static Fixed &  min(Fixed & a, Fixed  & b);
	static const Fixed  & min(Fixed const & a, Fixed const & b);




private:
	int _fixed;
	static int const  _bits;

};
std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif

// ************************************************************************** //
