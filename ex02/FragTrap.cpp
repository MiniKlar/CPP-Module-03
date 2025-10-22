/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:39 by lomont            #+#    #+#             */
/*   Updated: 2025/10/22 01:59:56 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string setName ) : ClapTrap(setName, 100, 100, 30) {
	std::cout << "FragTrap constructor called!" << std::endl;
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

