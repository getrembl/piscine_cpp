// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 15:13:17 by getrembl          #+#    #+#             //
//   Updated: 2015/11/06 15:14:24 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _fixed(0), _bits(8){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) : _fixed(0), _bits(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int Fixed::getRawBits( void ) const {
	std::cout << "GetRawBits function called" << std::endl;
	return this->_fixed;
}

int Fixed::getNbBits( void ) const {
	return this->_bits;
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

// ************************************************************************** //
