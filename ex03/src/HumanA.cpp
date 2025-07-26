/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:15:10 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 19:53:42 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string p_name, Weapon *p_weapon) {
	this->_name = p_name;
	this->_weapon = *p_weapon;
}


void HumanA::attack ( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}