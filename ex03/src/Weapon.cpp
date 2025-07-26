/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:07:44 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 19:49:00 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

const std::string &Weapon::getType ( void ) {
	return (this->_type);
}

void 	Weapon::setType( std::string p_type ) {
	this->_type = p_type;
}

Weapon::Weapon( std::string p_type) {
	this->_type = p_type;
}