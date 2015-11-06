// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 10:55:12 by sdurr             #+#    #+#             //
//   Updated: 2015/06/19 15:16:18 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int main( void )
{
	FragTrap Aurelien("Aurelien");
	FragTrap Clara("Clara");


	std::cout << "     Presentation of my personage    " << std::endl;

	std::cout << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;

	std::cout << "Name " << Clara.getName() << " Hit Points: " << Clara.getHitPoint() << " energy: " << Clara.getEnergy() << " Level : " << Clara.getLevel() << std::endl;

/****************************/
	std::cout << std::endl << "        Test energie vaulhunter " << std::endl;
	srand(time(NULL));
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Clara.vaulhunter_dot_exe(" Aurelien ");

	std::cout << std::endl << "  Rajout energy 150   " << std::endl;
	Clara.setEnergy(150);
	std::cout << "CLara's energy is : " << Clara.getEnergy() << std::endl;

/************************************/
	std::cout << std::endl << "         Combat" << std::endl;
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(20);

	std::cout <<std::endl << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	std::cout << std::endl << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(20);
	std::cout << std::endl <<"Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;
	Aurelien.beRepaired(10);
	Aurelien.beRepaired(10);
	Aurelien.beRepaired(10);
	Aurelien.beRepaired(150);
	std::cout << std::endl << "Aurelien repaired max " << std::endl << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl << std::endl;

	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
		std::cout << "Name " << Clara.getName() << " Hit Points: " << Clara.getHitPoint() << " energy: " << Clara.getEnergy() << " Level : " << Clara.getLevel() << std::endl;
	std::cout << std::endl << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Aurelien.takeDamage(25);
	Clara.vaulhunter_dot_exe(" Aurelien ");
	Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(105);
	std::cout << std::endl;
	Aurelien.takeDamage(105);
Clara.rangedAttack( "Aurelien" );
	Aurelien.takeDamage(105);

	std::cout << std::endl << "Name " << Aurelien.getName() << " Hit Points: " << Aurelien.getHitPoint() << " energy: " << Aurelien.getEnergy() << " Level : " << Aurelien.getLevel() << std::endl;

		/*********************************/
	std::cout << std::endl << "  -------------------- GLORY ALL OF THE QUEEN----------------     " <<std::endl;
		std::cout << Clara.getName() << " say's : I'm the Best on you knees before you're Queen " << std::endl;

		std::cout << Aurelien.getName() << " say's : I can't I'm dead " << std::endl << " Aurelien Sticking his tongue to the queen" << std::endl;

		return 0;
}
