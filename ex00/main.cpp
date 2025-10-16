/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:12 by lomont            #+#    #+#             */
/*   Updated: 2025/10/15 13:03:16 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- CONSTRUCTORS ---" << std::endl;
	ClapTrap clap("CL4P");
	clap.attack("a bandit");

	std::cout << "\n--- ACTIONS ---" << std::endl;
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.takeDamage(8);
	clap.takeDamage(1); // Should do nothing if HP is 0

	std::cout << "\n--- NO HIT POINTS LEFT ---" << std::endl;
	clap.attack("another bandit"); // Cannot attack

	ClapTrap trap("TR4P");
	std::cout << "\n--- NO ENERGY POINTS LEFT ---" << std::endl;
	trap.beRepaired(1); // EP: 9
	trap.beRepaired(1); // EP: 8
	trap.beRepaired(1); // EP: 7
	trap.beRepaired(1); // EP: 6
	trap.beRepaired(1); // EP: 5
	trap.attack("skag"); // EP: 4
	trap.attack("skag"); // EP: 3
	trap.attack("skag"); // EP: 2
	trap.attack("skag"); // EP: 1
	trap.attack("skag"); // EP: 0
	trap.attack("skag"); // No energy left
	trap.beRepaired(1);  // No energy left

	std::cout << "\n--- COPY AND ASSIGNMENT ---" << std::endl;
	ClapTrap original("Original");
	original.takeDamage(3);

	std::cout << "\n--- Copy constructor ---" << std::endl;
	ClapTrap copy(original);
	copy.attack("a clone");

	std::cout << "\n--- Copy assignment operator ---" << std::endl;
	ClapTrap assigned("Assigned");
	assigned = original;
	assigned.attack("another clone");

	std::cout << "\n--- DESTRUCTORS ---" << std::endl;
	return 0;
}
