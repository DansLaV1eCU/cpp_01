/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:42:43 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 16:26:12 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {


public:

    Zombie( std::string name );
    ~Zombie();

    void announce ( void );

	
private:

    std::string _name;

};

void	randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif