// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 16:58:10 by getrembl          #+#    #+#             //
//   Updated: 2015/11/07 16:58:16 by getrembl         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main( void )
{
	srand(time(NULL));
	std::cout << "-------------------------------------" << std::endl;
	ScavTrap Aurelien("Aurelien");
	FragTrap Clara("Clara");

	std::cout << std::endl << "------------------CHALENGE ------------------- " << std::endl;
	Aurelien.challengeNewComer(" Bimbo ");
	Aurelien.challengeNewComer(" Bimbo ");
	Aurelien.challengeNewComer(" Bimbo ");

	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "     Presentation of my personage    " << std::endl;

	std::cout << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;

	std::cout << "Name " << Clara.getName() << " Hit Points: " << Clara.getHitPoint() << " energy: " << Clara.getEnergy() << " Level : " << Clara.getLevel() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << std::endl << "----------COMBAT :  Clara VS Aurelien ------------------" << std::endl;
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(20);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(50);
	Aurelien.beRepaired(30);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(25);
	Aurelien.takeDamage(25);

	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << std::endl << "   GLORY OF THE QUEEN     " <<std::endl;
		std::cout << Clara.getName() << " say's : I'm the Best on you knees before you're Queen " << std::endl;

		std::cout << Aurelien.getName() << " say's : I can't I'm dead " << std::endl << " Aurelien Sticking his tongue to the queen" << std::endl;
		std::cout << std::endl << "-----------------------FIN COMBAT TOUT LE MONDE SE CASSE-------------------" << std::endl;
		return 0;
}

// ************************************************************************** //
