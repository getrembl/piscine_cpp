// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:32:29 by sdurr             #+#    #+#             //
//   Updated: 2015/06/17 21:31:13 by sdurr            ###   ########.fr       //
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
