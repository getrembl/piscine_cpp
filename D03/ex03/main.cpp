// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 17:05:55 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 17:06:12 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main( void )
{
	srand(time(NULL));
	std::cout << "-----------------------------˜NAISSANCE--------------" << std::endl;
	ScavTrap Aurelien( "Aurelien" );
	FragTrap Clara( "Clara" );
	ClapTrap Geoffroy("Geoffroy", 10, 20, 30, 45, 1, 20, 112, 10);
	NinjaTrap Stephanie( "Stephanie" );

	std::cout << "-----------------------------˜CHALLENGE--------------" << std::endl;
	Aurelien.challengeNewComer(" Clara ");
		Aurelien.challengeNewComer(" GEOFFROY ");

	std::cout << "--------------Presentation of my personage----------------- " << std::endl;
	std::cout << "Name " << Stephanie.getName() << " Hit Points: " << Stephanie.getHitPoint() << " energy: " << Stephanie.getEnergy() << " Level : " << Stephanie.getLevel() << std::endl;

	std::cout << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;

	std::cout << "Name " << Clara.getName() << " Hit Points: " << Clara.getHitPoint() << " energy: " << Clara.getEnergy() << " Level : " << Clara.getLevel() << std::endl;

// ************************************************************************** //

	std::cout << std::endl << "------------------Combat   Clara VS Aurelien------------ " << std::endl;
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(20);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	std::cout << "Name " << Clara.getName() << " Hit Points: " << Clara.getHitPoint() << " energy: " << Clara.getEnergy() << " Level : " << Clara.getLevel() << std::endl;
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(25);
	Aurelien.takeDamage(25);

// ************************************************************************** //

	std::cout << std::endl << " -----------------  GLORY TO THE QUEEN --------------    " <<std::endl;
		std::cout << Clara.getName() << " say's : I'm the Best on you knees before you're Queen " << std::endl;

		std::cout << Aurelien.getName() << " say's : I can't I'm dead " << std::endl << " Aurelien Sticking his tongue to the queen" << std::endl;
		std::cout << std::endl << "--------------------- NINJA " << Stephanie.getName() << "IS ON THE PLACE---------------" << std::endl;
		Stephanie.ninjaShoeBox( Aurelien );
		Stephanie.ninjaShoeBox( Clara );
		Stephanie.ninjaShoeBox( Geoffroy );
		std::cout << std::endl << "    ------------------ Finish Stephanie Win------------------" << std::endl;
		return 0;
}

// ************************************************************************** //
