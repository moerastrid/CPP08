/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:43:25 by ageels        #+#    #+#                 */
/*   Updated: 2023/08/28 13:37:57 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>


/* tipje van Robert om de iterator terug te geven juist;
templace<class T>
typename T::iterator easyfind(T cont, int n) {
	typename T::iterator it;
} */

template<typename T>
int easyfind(T cont, int n) {
	if (cont.empty())
	{
		std::cout << "Container empty :(" << std::endl;
		return (0);
	}
	for (unsigned long i = 0; i < cont.size(); i++) {
		std::cout << i << " : " << cont[i] << std::endl;
		if (cont[i] == n) {
			std::cout << "FOUND ! " << i << " : " << cont[i] << std::endl;
			return (cont[i]);
		}
	}
	//while (!cont.empty()) {
	//	if (cont.front() == n)
	//		return (cont);
	//	cont.pop_front();
	//}
	std::cout << "not found" << std::endl;
	return (0);
};

#endif