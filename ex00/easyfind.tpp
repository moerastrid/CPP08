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

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T cont, int n) {
	typename T::iterator temp;

	if (cont.empty() == true) {
		throw EmptyContainerException();
	}
	temp = std::find(cont.begin(), cont.end(), n);
	if (temp == cont.end())
		throw NoMatchContainerException();
	else
		return (temp);
}

const char * EmptyContainerException::what() const throw() {
	return ("EasyFind exception : empty container");
}

const char * NoMatchContainerException::what() const throw() {
	return ("EasyFind exception : no matching container found ");
}

#endif
