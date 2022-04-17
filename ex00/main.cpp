/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:52:11 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 12:52:11 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int>    vector_int;
    std::list<int>      list_int;

    for (double d = 0.1; d < 21; d++)
    {
        vector_int.push_back(static_cast<int>(d));
        list_int.push_back(static_cast<int>(d));
    }

    try
    {
        easyfind(vector_int, 1);
        easyfind(vector_int, 2);
        easyfind(vector_int, -1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        easyfind(list_int, 1);
        easyfind(list_int, 20);
        easyfind(list_int, -1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}