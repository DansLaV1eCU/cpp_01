/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:33:25 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/27 00:06:32 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "info.hpp"

std::string info::strToReplace;
std::string info::strToInsert;

bool checkParams( int argc, char **argv ) {
	if ( argc != 4 ) {
		std::cout << "Wrong number of parameters" << std::endl;
		return 1;
	}

	info::strToReplace = argv[2];
	info::strToInsert = argv[3];

	if ( info::strToInsert == info::strToReplace || info::strToReplace.empty() ) {
		std::cout << "Wrong input" << std::endl;
		return false;
	}

	return true;
}

std::string createString( std::ifstream &file) {
	std::string line;
	std::string str;

	while ( std::getline( file, line ) ) {
		str += line;
		str += '\n';
	}
	
	while ( true ) {
		int index = str.find(info::strToReplace);
		if ( index == -1 )
			break;
		str.erase( index, info::strToReplace.length() );
		str.insert( index, info::strToInsert );
	}

	if ( !str.empty() ) {
		str.erase( str.size() - 1 );
	}

	return str;
}

int main( int argc, char **argv ) {
	if ( !checkParams( argc, argv ) ) {
		return 1;
	}

	std::ifstream file1( argv[1] );
	if ( !file1.is_open() ) {
		std::cout << "Error! Can not read from the file" << std::endl;
		return 1;
	}

	std::string outPutName = argv[1];
	outPutName += ".replace";

	std::ofstream file2( outPutName.c_str() );
	if ( !file2.is_open() ) {
		std::cout << "Error! Can not write to the file" << std::endl;
		file1.close();
		return 1;
	}
	
	std::string str = createString( file1 );
	file2 << str;

	file1.close();
	file2.close();

	return 0;
}