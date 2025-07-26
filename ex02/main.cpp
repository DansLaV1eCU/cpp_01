/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:03:38 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/26 17:07:51 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << " | " << stringPTR << " | " << &stringREF << std::endl;
	std::cout << str << " | " << *stringPTR << " | " << stringREF << std::endl;

	return 0;
}