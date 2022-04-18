/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:38:11 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 17:38:11 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _max_nb(0)
{
    return ;
}

Span::Span(unsigned int nb): _max_nb(nb)
{
    return ;
}

Span::Span(Span const& src): _max_nb(src._max_nb)
{
    std::vector<int> myvector(src._max_nb);

    std::copy(src._container.begin(), src._container.end(), myvector.begin());
    this->_container = myvector;
    return ;
}

Span::~Span()
{
    return ;
}

Span&    Span::operator=(Span const& rhs)
{
    std::vector<int> myvector(rhs._max_nb);

    this->_container.clear();
    std::copy(rhs._container.begin(), rhs._container.end(), myvector.begin());
    this->_container = myvector;
    this->_max_nb = rhs._max_nb;
    return (*this);
}

void    Span::addNumber(int const& nb)
{
    if (this->_max_nb == this->_container.size())
        throw std::exception();
    else
        this->_container.push_back(nb);
}

unsigned int Span::shortestSpan()
{

    if (this->_container.size() <= 1 || this->_max_nb <= 1)
        throw std::exception();
    std::vector<int> tmp(this->_max_nb);

    std::partial_sort_copy(this->_container.begin(), this->_container.end(), tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 0; i < this->_max_nb - 1; i++)
    {
        if (min > tmp[i + 1] - tmp[i])
            min = tmp[i + 1] - tmp[i];
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (this->_container.size() <= 1 || this->_max_nb <= 1)
        throw std::exception();
    return (*std::max_element(this->_container.begin(), this->_container.end())
            - *std::min_element(this->_container.begin(), this->_container.end()));
}

int randomNumber()
{
    return (rand());
}

void    Span::fillRand()
{
    this->_container.assign(this->_max_nb, 0);
    srand(time(0));
    std::generate(this->_container.begin(), this->_container.end(), randomNumber);
}