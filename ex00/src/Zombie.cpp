/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:46:18 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/25 23:24:38 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name( name ) {   
}

Zombie::~Zombie( void ){
	std::cout << this->_name << " is destroyed(" << std::endl;
}	

void Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...";
}