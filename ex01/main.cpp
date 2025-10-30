/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:12 by lomont            #+#    #+#             */
/*   Updated: 2025/10/29 23:57:54 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- CONSTRUCTORS ---" << std::endl;
    ScavTrap scav("SC4V");
    scav.attack("a bandit");

    std::cout << "\n--- ACTIONS ---" << std::endl;
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n--- NO HIT POINTS LEFT ---" << std::endl;
    scav.takeDamage(100);
    scav.attack("another bandit");

    std::cout << "\n--- NO ENERGY POINTS LEFT ---" << std::endl;
    ScavTrap energyTest("Energy");
    for (int i = 0; i < 51; i++) {
        energyTest.attack("target");
    }

    std::cout << "\n--- COPY AND ASSIGNMENT ---" << std::endl;
    ScavTrap original("Original");
    original.takeDamage(20);

    std::cout << "\n--- Copy constructor ---" << std::endl;
    ScavTrap copy(original);
    copy.attack("a clone");
	copy.beRepaired(1);

    std::cout << "\n--- Copy assignment operator ---" << std::endl;
    ScavTrap assigned("Assigned");
    assigned = copy;
    assigned.attack("another clone");
	assigned.beRepaired(1);

    std::cout << "\n--- DESTRUCTORS ---" << std::endl;
    return 0;
}
