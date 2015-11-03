// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 15:06:29 by sdurr             #+#    #+#             //
//   Updated: 2015/06/16 18:27:40 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include <string.h>

Contact::Contact( void ) {
	return;
}

std::string Contact::getFirstName( void ) const {
	return Contact::_firstName;
}

void		Contact::setFirstName( std::string x ) {
	Contact::_firstName = x;
}

std::string Contact::getLastName( void ) const {
	return Contact::_lastName;
}

void		Contact::setLastName( std::string x ) {
	Contact::_lastName = x;
}

std::string Contact::getNickName( void ) const {
	return Contact::_nickName;
}

void		Contact::setNickName( std::string x ) {
	Contact::_nickName = x;
}

std::string Contact::getLogin( void ) const {
	return Contact::_login;
}

void		Contact::setLogin( std::string x ) {
	Contact::_login = x;
}

std::string Contact::getPostal( void ) const {
	return Contact::_postal;
}

void		Contact::setPostal( std::string x ) {
	Contact::_postal = x;
}

std::string Contact::getEmail( void ) const {
	return Contact::_email;
}

void		Contact::setEmail( std::string x ) {
	Contact::_email = x;
}

std::string Contact::getPhone( void ) const {
	return Contact::_phone;
}

void		Contact::setPhone( std::string x ) {
	Contact::_phone = x;
}

std::string Contact::getBirthday( void ) const {
	return Contact::_birthday;
}

void		Contact::setBirthday( std::string x ) {
	Contact::_birthday = x;
}

std::string Contact::getFavoriteMeal( void ) const {
	return Contact::_favoriteMeal;
}

void		Contact::setFavoriteMeal( std::string x ) {
	Contact::_favoriteMeal = x;
}

std::string Contact::getColor( void ) const {
	return Contact::_color;
}
std::string Contact::getSecret( void ) const {
	return Contact::_secret;
}

void		Contact::setColor( std::string x ) {
	Contact::_color = x;
}

void		Contact::setSecret( std::string x ) {
	Contact::_secret = x;
}
void	Contact::set( void ){
	std::string x;

	std::cout << "Please enter First Name" << std::endl;
	std::cin >> x;
	setFirstName(x);
	std::cout << "Please enter LastName" << std::endl;
	std::cin >> x;
	setLastName(x);
	std::cout << "Please enter Nickname" << std::endl;
	std::cin >> x;
	setNickName(x);
	std::cout << "Please enter Login" << std::endl;
	std::cin >> x;
	setLogin(x);
	std::cout << "Please enter Postal Adresse" << std::endl;
	std::cin >> x;
	setPostal(x);
	std::cout << "Please enter email Adresse" << std::endl;
	std::cin >>x;
	setEmail(x);
	std::cout << "Please enter phone number" << std::endl;
	std::cin >> x;
	setPhone(x);
	std::cout << "Please enter birthay Date" << std::endl;
	std::cin >> x;
	setBirthday(x);
	std::cout << "Please enter favorite meal" << std::endl;
	std::cin >> x;
	setFavoriteMeal(x);
	std::cout << "Please enter your underwear color" << std::endl;
	std::cin >> x;
	setColor(x);
		std::cout << "Please enter your darkest secret" << std::endl;
	std::cin >> x;
	setSecret(x);
}

void 		Contact::search( void ) const {
	if (getFirstName().length() > 10) {
		std::cout << std::setw(10) << getFirstName().substr(0, 9);
			std::cout << ".";
			std::cout << "| ";
		}
		else {
			std::cout << std::setw(10) << getFirstName().substr(0, 10);
			std::cout << " | ";
		}
	if (getLastName().length() > 10) {
			std::cout << std::setw(10) << getLastName().substr(0, 9);
			std::cout << ".";
			std::cout << "| ";
		}
		else {
			std::cout << std::setw(10) << getLastName().substr(0, 10);
			std::cout << " | ";
		}
	if (getNickName().length() > 10) {
		std::cout << std::setw(10) << getNickName().substr(0, 9);
			std::cout << ".";
			std::cout << "| ";
		}
		else {
			std::cout << std::setw(10) << getNickName().substr(0, 10);
			std::cout << " | ";
		}
}

void		Contact::aff( void ) const {
	std::cout << " First Name : ";
	std::cout << getFirstName() << std::endl;
	std::cout << " LastName : " ;
	std::cout << getLastName() << std::endl;
	std::cout << " Nickname : ";
	std::cout << getNickName() << std::endl;
	std::cout << " Login";
	std::cout << getLogin() << std::endl;
	std::cout << " Postal Adresse : ";
	std::cout << getPostal() << std::endl;
	std::cout << " email Adresse : ";
	std::cout << getEmail() << std::endl;
	std::cout << " phone number : ";
	std::cout << getPhone() << std::endl;
	std::cout << " birthay Date : ";
	std::cout << getBirthday() << std::endl;
	std::cout << " favorite meal : ";
	std::cout << getFavoriteMeal() << std::endl;
	std::cout << " underwear color and darkest secret : ";
	std::cout << getColor() << std::endl;
	std::cout << " darkest secret : ";
	std::cout << getSecret() << std::endl;
}
Contact::~Contact( void ) {
	return;
}
