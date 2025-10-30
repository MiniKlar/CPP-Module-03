/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:12 by lomont            #+#    #+#             */
/*   Updated: 2025/10/30 01:03:36 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== TESTING DIAMONDTRAP ===" << std::endl;
    std::cout << "\n--- DiamondTrap Constructor ---" << std::endl;
    DiamondTrap diamond("DI4M-TP");

    std::cout << "\n--- DiamondTrap Actions ---" << std::endl;
    diamond.attack("bandit"); // Should use ScavTrap's attack
    diamond.takeDamage(42);   // Inherited from ClapTrap
    diamond.beRepaired(21);   // Inherited from ClapTrap
    diamond.whoAmI();         // Special ability


    std::cout << "\n--- DiamondTrap HP/EP/AD Test ---" << std::endl;
    FragTrap fragStats("FR4G-TP");
    ScavTrap scavStats("SC4V-TP");
    DiamondTrap diamondStats("DI4M-TP-STATS");
    std::cout << "FragTrap: HP=100, EP=100, AD=30" << std::endl;
    fragStats.attack("test");
    std::cout << "ScavTrap: HP=100, EP=50, AD=20" << std::endl;
    scavStats.attack("test");
    std::cout << "DiamondTrap: (should have HP=100, EP=50, AD=30)" << std::endl;
    diamondStats.attack("test");


    std::cout << "\n--- DiamondTrap Copy & Assignment ---" << std::endl;
    DiamondTrap copyDiamond(diamond);
    copyDiamond.whoAmI();
    DiamondTrap assignedDiamond("ASSIGN-TP");
    assignedDiamond = diamond;
    assignedDiamond.whoAmI();

    std::cout << "\n--- DiamondTrap Energy Test ---" << std::endl;
    for (int i = 0; i < 55; i++) {
        diamond.attack("target");
    }

    std::cout << "\n--- DiamondTrap HP Test ---" << std::endl;
    diamond.takeDamage(999);
    diamond.attack("target");

    std::cout << "\n=== DESTRUCTORS ===" << std::endl;
    return 0;
}
