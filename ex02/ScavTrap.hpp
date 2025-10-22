/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:37 by lomont            #+#    #+#             */
/*   Updated: 2025/10/21 02:38:34 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "iostream"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( std::string setName );
		ScavTrap( ScavTrap const & src );
		ScavTrap& operator=( ScavTrap const & other );
		~ScavTrap( void );
		void attack(const std::string& target) ;
		void guardGate( void );
};

#endif
