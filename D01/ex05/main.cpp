// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:31:15 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:31:25 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Human.hpp"

int main( void )
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identiffy() << std::endl;
}

// ************************************************************************** //
