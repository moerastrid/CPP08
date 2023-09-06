/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:21:07 by ageels        #+#    #+#                 */
/*   Updated: 2023/09/04 18:06:55 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>
#include <exception>

int main() {
	std::vector<int>	myvec;
	
	for (int i(2); i<=3; i++) {
		myvec.push_back(i);
	}
	std::array<int, 5> myarr = {0, 1, 2, 3, 4};

	for (int num = -1; num <= 5; num++)
	{
		std::cout << "Number : " << num << std::endl;
		try {
			std::cout << "vec " << *easyfind(myvec, num) << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << "arr " << *easyfind(myarr, num) << std::endl << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	try {
		std::cout << std::endl << "Empty container : " << std::endl;
		std::vector<int> emptyvector;
		easyfind(emptyvector, 42);
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << " - - - THE END - - - " << std::endl;
	return (0);
}