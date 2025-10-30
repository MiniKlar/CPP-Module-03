/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:11 by lomont            #+#    #+#             */
/*   Updated: 2025/10/29 23:59:37 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "iostream"

class ClapTrap
{
	protected:
		std::string 			Name;
		unsigned int			HitPoints;
		unsigned int			EnergyPoints;
		unsigned int			AttackDamage;
	public:
		ClapTrap( void );
		ClapTrap( std::string setName );
		ClapTrap( ClapTrap const & src );
		ClapTrap& operator=( ClapTrap const & other );
		~ClapTrap( void );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif
