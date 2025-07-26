/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:15:10 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 21:19:46 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string p_name) : _name(p_name) {
}

void HumanB::setWeapon ( Weapon &p_weapon) {
	this->_weapon = &p_weapon;
}

void HumanB::attack ( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}