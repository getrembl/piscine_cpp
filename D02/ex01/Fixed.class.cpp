// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 09:26:10 by sdurr             #+#    #+#             //
//   Updated: 2015/06/18 21:01:42 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed( void ) : _fixed(0), _bits(8){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int nb ) : _fixed(nb), _bits(8){
	std::cout << "Int constructor called" << std::endl;

	this->_fixed = nb << getNbBits();
	return ;
}

Fixed::Fixed( float nb ) : _fixed(nb), _bits(8){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(nb * ( 1 << getNbBits()));
	return ;
}

Fixed::Fixed( Fixed const & src ): _fixed(0), _bits(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int Fixed::getRawBits( void ) const {
	return this->_fixed;
}

int Fixed::getNbBits( void ) const {
	return this->_bits;
}

float Fixed::toFloat( void ) const {
	return (float)this->_fixed  / ( 1 << this->_bits);
}
int Fixed::toInt( void ) const {
	return this->_fixed >> getNbBits();
}

Fixed & Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream &operator<<( std::ostream & o, Fixed const &  i) {
	o << i.toFloat();
	return o;
}
