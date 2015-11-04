// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: karakhirn <marvin@42.fr>                   +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 16:54:09 by karakhirn         #+#    #+#             //
//   Updated: 2015/11/04 16:54:20 by karakhirn        ###   ########.fr       //
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
