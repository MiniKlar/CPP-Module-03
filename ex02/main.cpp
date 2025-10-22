/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:12 by lomont            #+#    #+#             */
/*   Updated: 2025/10/22 02:04:01 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== TESTING CLAPTRAP ===" << std::endl;
    std::cout << "\n--- ClapTrap Constructor ---" << std::endl;
    ClapTrap clap("CL4P-TP");

    std::cout << "\n--- ClapTrap Actions ---" << std::endl;
    clap.attack("bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n\n=== TESTING FRAGTRAP ===" << std::endl;
    std::cout << "\n--- FragTrap Constructor ---" << std::endl;
    FragTrap frag("FR4G-TP");

    std::cout << "\n--- FragTrap Actions ---" << std::endl;
    frag.attack("skag");
    frag.takeDamage(50);
    frag.beRepaired(25);
    frag.highFivesGuys();

    std::cout << "\n--- FragTrap HP Test ---" << std::endl;
    frag.takeDamage(80);
    frag.attack("another target"); // Should fail - no HP

    std::cout << "\n--- FragTrap Energy Test ---" << std::endl;
    FragTrap energyTest("Energy");
    for (int i = 0; i < 100; i++) {
        energyTest.attack("target");
    }
    energyTest.attack("target"); // Should fail - no energy

    std::cout << "\n\n=== TESTING COPY CONSTRUCTORS ===" << std::endl;
    std::cout << "\n--- ClapTrap Copy ---" << std::endl;
    ClapTrap clapCopy(clap);
    clapCopy.attack("copy target");

    std::cout << "\n--- FragTrap Copy ---" << std::endl;
    FragTrap fragCopy(frag);
    fragCopy.highFivesGuys();

    std::cout << "\n\n=== TESTING ASSIGNMENT OPERATORS ===" << std::endl;
    std::cout << "\n--- ClapTrap Assignment ---" << std::endl;
    ClapTrap clapAssigned("Assigned");
    clapAssigned = clap;
    clapAssigned.attack("assigned target");

    std::cout << "\n--- FragTrap Assignment ---" << std::endl;
    FragTrap fragAssigned("Assigned");
    fragAssigned = frag;
    fragAssigned.attack("assigned target");

    std::cout << "\n\n=== COMPARING STATS ===" << std::endl;
    std::cout << "\nClapTrap: HP=10, EP=10, AD=0" << std::endl;
    ClapTrap statClap("Stats");
    statClap.attack("test");

    std::cout << "\nFragTrap: HP=100, EP=100, AD=30" << std::endl;
    FragTrap statFrag("Stats");
    statFrag.attack("test");

    std::cout << "\n\n=== DESTRUCTORS ===" << std::endl;
    return 0;
}
