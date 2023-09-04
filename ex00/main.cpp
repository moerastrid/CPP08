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

int main() {
	int number = 1;

	std::vector<int> myvector;
	std::vector<int> emptyvector;
	for (int i(2); i<=4; i++) {
		myvector.push_back(i);
	}

	std::array<int, 5> myarray = {0, 1, 2, 3, 4};

	easyfind(myvector, number);
	easyfind(myarray, number);
	easyfind(emptyvector, number);
	std::cout << "vector " << *easyfind(myvector, number) << std::endl;
	std::cout << "number " << *easyfind(myarray, number) << std::endl;
	
	std::cout << " - - - THE END - - - " << std::endl;
	return (0);
}
