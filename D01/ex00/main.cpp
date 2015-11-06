// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 22:21:46 by getrembl          #+#    #+#             //
//   Updated: 2015/11/04 22:21:47 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

void	PonyOnTheStack( void )
{
	Pony stack;

	std::cout << "Pony on the stack is create" << std::endl;
}

void	PonyOnTheHeap( void )
{
	Pony * heap = new Pony;

	std::cout << "Pony on the heap is create" << std::endl;
	delete heap;
	std::cout << "Pony on the heap is delete" << std::endl;
}

int		main( void )
{
	PonyOnTheStack();
	std::cout << "Pony on the Stack is delete" << std::endl;
	PonyOnTheHeap();
}

// ************************************************************************** //
