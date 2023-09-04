/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.tpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 17:30:10 by ageels        #+#    #+#                 */
/*   Updated: 2023/09/04 18:05:13 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>

template<typename T>
typename T::iterator easyfind(T cont, int n) {

	return( std::find(cont.begin(), cont.end(), n));

}

//int easyfind(T cont, int n) {
//	if (cont.empty())
//	{
//		std::cout << "Container empty :(" << std::endl;
//		return (0);
//	}
//	for (unsigned long i = 0; i < cont.size(); i++) {
//		std::cout << i << " : " << cont[i] << std::endl;
//		if (cont[i] == n) {
//			std::cout << "FOUND ! " << i << " : " << cont[i] << std::endl;
//			return (cont[i]);
//		}
//	}
//	std::cout << "not found" << std::endl;
//	return (0);
//};

#endif