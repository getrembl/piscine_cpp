// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 16:11:28 by getrembl          #+#    #+#             //
//   Updated: 2015/11/06 16:11:41 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>
#include <math.h>

int const Fixed::_bits = 8;

Fixed::Fixed( void ) : _fixed(0){
	return ;
}

Fixed::Fixed( int nb ) : _fixed(nb) {
	this->_fixed = nb << getNbBits();
	return ;
}

Fixed::Fixed( float nb ) : _fixed(nb) {
	this->_fixed = roundf(nb * ( 1 << getNbBits() ));
	return ;
}

Fixed::Fixed( Fixed const & src ): _fixed(0) {
	*this = src;
	return ;
}

void		Fixed::setRawbits( int const raw ) {
	this->_fixed = raw;
}

int Fixed::getRawBits( void ) const {
	return this->_fixed;
}

int Fixed::getNbBits( void ) const {
	return this->_bits;
}

float Fixed::toFloat( void ) const {
	return (float)this->_fixed / ( 1 << getNbBits());
}
int Fixed::toInt( void ) const {
	return this->_fixed >> getNbBits();
}

Fixed & Fixed::operator=( Fixed const & rhs ) {
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return *this;
}

bool Fixed::operator==( Fixed const & rhs ) {
	if (this != &rhs)
		return 0;
	return 1;
}

bool Fixed::operator!=( Fixed const & rhs ) {
	if (this == &rhs)
		return 0;
	return 1;
}

bool Fixed::operator>=( Fixed const & rhs ) {
	if (this >= &rhs)
		return 1;
	return 0;
}

bool Fixed::operator<=( Fixed const & rhs ) {
	if (this >= &rhs)
		return 0;
	return 1;
}

bool Fixed::operator>( Fixed const & rhs ) {
	if (this < &rhs)
		return 0;
	return 1;
}

bool Fixed::operator<( Fixed const & rhs ) {
	if (this < &rhs)
		return 1;
	return 0;
}


Fixed Fixed::operator+( Fixed const & rhs ) {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed & Fixed::operator++( void ) {
	this->setRawbits(++(this->_fixed));
	 return *this;
}

Fixed  Fixed::operator++( int ) {
	Fixed tmp = *this;
	this->setRawbits(++(this->_fixed));
	 return tmp;
}

Fixed & Fixed::operator--( void ) {
	this->setRawbits(--(this->_fixed));
	 return *this;
}

Fixed  Fixed::operator--( int ) {
	Fixed tmp = *this;
	this->setRawbits(--(this->_fixed));
	 return tmp;
}

Fixed Fixed::operator-( Fixed const & rhs ) {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const & rhs ) {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs ) {
	return Fixed(this->toFloat() / rhs.toFloat());
}


Fixed::~Fixed( void ) {
	return ;
}

std::ostream &operator<<( std::ostream & o, Fixed const &  i) {
	o << i.toFloat();
	return o;
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	if ( a.toFloat() >= b.toFloat())
	{
		return a;
	}
	return b;
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b) {
	if ( a.toFloat() >= b.toFloat())
	{
		return a;
	}
	return b;
}

Fixed  & Fixed::min(Fixed & a, Fixed & b) {
	if ( a.toFloat() <= b.toFloat())
	{
		return a;
	}
	return b;
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b) {
	if ( a.toFloat() <= b.toFloat())
	{
		return a;
	}
	return b;
}

// ************************************************************************** //
