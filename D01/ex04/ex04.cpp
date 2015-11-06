// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:23:17 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:23:24 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main( void )
{
	std::string myString = "HI THIS IS BRAIN";
	std::string* myPtrString = &myString;
	std::string& myRefString = myString;

	std::cout << "My string is " << myString << std::endl;
	std::cout << "My pointeur string is " << *myPtrString << std::endl;
	std::cout << "My Reference string is " << myRefString << std::endl;
	return 0;
}

// ************************************************************************** //
