/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:43:25 by ageels        #+#    #+#                 */
/*   Updated: 2023/09/04 18:02:49 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>

#include "easyfind.tpp"

template<typename T>
typename T::iterator easyfind(T cont, int n);

//template<typename T>
//int easyfind(T cont, int n);

#endif
