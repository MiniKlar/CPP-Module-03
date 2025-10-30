/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:39 by lomont            #+#    #+#             */
/*   Updated: 2025/10/30 00:05:30 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("defaultClapTrap") {
	std::cout << "Default FragTrap constructor called!" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	return ;
}

FragTrap::FragTrap( std::string setName ) : ClapTrap(setName) {
	std::cout << "Named FragTrap constructor called!" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=( FragTrap const & other ) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called!" << std::endl;
	return ;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "Five Guys!" << std::endl;
	return ;
}

