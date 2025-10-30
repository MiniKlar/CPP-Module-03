/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:37 by lomont            #+#    #+#             */
/*   Updated: 2025/10/30 00:03:13 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "iostream"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string setName );
		ScavTrap( ScavTrap const & src );
		ScavTrap& operator=( ScavTrap const & other );
		~ScavTrap( void );
		void attack(const std::string& target) ;
		void guardGate( void );
};

#endif
