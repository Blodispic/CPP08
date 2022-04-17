/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:52:13 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 12:52:13 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void easyfind(T container, int to_find)
{
    typename T::iterator p;
    int     distance;

    p = std::find(container.begin(), container.end(), to_find);
    if (p != container.end())
    {
        distance = std::distance(container.begin(), p);
        std::cout << "Ocurence: '" << to_find << "' found at position " << distance << std::endl;
    }
    else
        throw(std::exception());
}

#endif