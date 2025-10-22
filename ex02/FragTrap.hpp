/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:37 by lomont            #+#    #+#             */
/*   Updated: 2025/10/22 02:00:22 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "iostream"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string setName );
		FragTrap( FragTrap const & src );
		FragTrap& operator=( FragTrap const & other );
		~FragTrap( void );
		void highFivesGuys( void );
};

#endif
