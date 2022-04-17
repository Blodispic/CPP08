/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:28:27 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 17:28:27 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span
{
private:
    unsigned int         		_max_nb;
    std::vector<int>	_container;

public:
    Span();
    Span(unsigned int nb);
    Span(Span const& src);
    ~Span();

	void			addNumber(int const& number);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	void			fillRand();
	 
	Span&			operator=(Span const& rhs);
};

#endif