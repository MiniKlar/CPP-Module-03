/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:09 by lomont            #+#    #+#             */
/*   Updated: 2025/10/22 02:08:28 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string setName ) : Name( setName ), HitPoints( 10 ), EnergyPoints( 10 ), AttackDamage( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src ) : Name(src.Name), HitPoints(src.HitPoints), EnergyPoints(src.EnergyPoints), AttackDamage(src.AttackDamage) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( ClapTrap const & other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void ClapTrap::attack(const std::string& target) {
	if (this->EnergyPoints <= 0) {
		std::cout << "ClapTrap " << this->Name << " has no Energy Points left to attack!" << std::endl;
		return ;
	}
	else if (this->HitPoints <= 0) {
		std::cout << "ClapTrap " << this->Name << " has no Hit Points!" << std::endl;
		return ;
	}
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->HitPoints == 0) {
		std::cout << "ClapTrap " << this->Name << " is already out of hit points!" << std::endl;
		return;
	}
	if (amount > this->HitPoints) {
		this->HitPoints = 0;
	} else {
	this->HitPoints -= amount;
	}
	std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage!" << std::endl;
	std::cout << "ClapTrap " << this->Name << " has now " << this->HitPoints << " hit Points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoints <= 0) {
		std::cout << "ClapTrap " << this->Name << " has no Energy Points left to be repaired!" << std::endl;
		return ;
	}
	if (this->HitPoints <= 0) {
		std::cout << "ClapTrap " << this->Name << " has no Hit Points left and can't be repaired!" << std::endl;
		return ;
	}
	this->EnergyPoints--;
	this->HitPoints += amount;
	std::cout << "ClapTrap " << this->Name << " repaired himself and retrieved " << amount << " hit Points!" << std::endl;
	std::cout << "ClapTrap " << this->Name << " has now " << this->HitPoints << " hit Points!" << std::endl;
}
