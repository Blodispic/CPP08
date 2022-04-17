/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:29:50 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 22:29:50 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    private:
    
    public:
    MutantStack<T>() {};
    MutantStack<T>(MutantStack<T> const& src) {};
    ~MutantStack<T>() {};
    std::stack<T>::container_type::iterator it;

    MutantStack<T> & operator=(MutantStack<T> const& rhs) {};
};

#endif