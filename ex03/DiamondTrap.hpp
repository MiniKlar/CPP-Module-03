/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:16:13 by lomont            #+#    #+#             */
/*   Updated: 2025/10/30 00:57:27 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string setName );
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap& operator=( DiamondTrap const & other );
		~DiamondTrap( void );
		void attack(const std::string& target);
		void whoAmI( void );
};

#endif
