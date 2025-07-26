/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:42:43 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 19:53:33 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {


public:

	HumanA( std::string p_name, Weapon *p_weapon);

	void attack( void );


private:

    std::string _name;
	Weapon 		_weapon;

	HumanA( void );
};

#endif