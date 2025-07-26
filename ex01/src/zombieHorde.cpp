/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:51:54 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 16:59:38 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zh = new Zombie[N];
	
	for ( int i = 0; i < N; i++) {
		zh[i].setName( name );
		zh[i].announce();
	}

	return zh;
}