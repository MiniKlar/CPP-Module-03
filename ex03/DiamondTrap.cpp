/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:16:02 by lomont            #+#    #+#             */
/*   Updated: 2025/10/30 01:03:29 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("defaultClapTrap_clap_name"), Name("defaultClapTrap") {
	std::cout << "DiamondTrap Default constructor called!" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
	return ;
}

DiamondTrap::DiamondTrap( std::string setName ) : ClapTrap(setName + "_clap_name"), Name(setName) {
	std::cout << "Named DiamondTrap constructor called!" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src.Name + "_clap_name"), ScavTrap(src), FragTrap(src), Name(src.Name) {
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	return ;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const & other ) {
	std::cout << "DiamondTrap copy assignment operator called!" << std::endl;
	if (this != &other) {
		this->Name = other.Name;
		ClapTrap::operator=(other);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap Destructor called!" << std::endl;
	return ;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
	return ;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap name is " << this->Name << " and ClapTrap name is " << ClapTrap::Name << std::endl;
	return ;
}
