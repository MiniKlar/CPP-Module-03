/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:39 by lomont            #+#    #+#             */
/*   Updated: 2025/10/21 02:37:55 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string setName ) : ClapTrap(setName, 100, 50, 20) {
	std::cout << "ScavTrap constructor called!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=( ScavTrap const & other ) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called!" << std::endl;
	return ;
}

void ScavTrap::guardGate( void ) {
	std::cout << "Gate keeper mode ON!" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target) {
	if (this->EnergyPoints <= 0) {
		std::cout << "ScavTrap " << this->Name << " has no Energy Points left to attack!" << std::endl;
		return ;
	}
	else if (this->HitPoints <= 0) {
		std::cout << "ScavTrap " << this->Name << " has no Hit Points!" << std::endl;
		return ;
	}
	this->EnergyPoints--;
	std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	return ;
}
