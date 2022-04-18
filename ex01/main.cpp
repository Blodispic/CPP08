/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:28:31 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 18:28:31 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);
        Span spnocompil = Span(1);
        sp.addNumber(6);

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            spnocompil.addNumber(5);
            std::cout << "One number" << std::endl;
            spnocompil.addNumber(8);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(-1);
        sp.addNumber(-5);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp = Span(100);
        for(int i = 0; i < 100; i++)
            sp.addNumber(rand());
        Span spCopy(sp);
        std::cout << "sp1 = " << sp.shortestSpan() << std::endl;
        std::cout << "sp1 = " << sp.longestSpan() << std::endl;

        sp.fillRand();
        std::cout << "sp2 = " << sp.shortestSpan() << std::endl;
        std::cout << "sp2 = " << sp.longestSpan() << std::endl;

        Span spAssignmentCopy;
        spAssignmentCopy = sp;

        std::cout << "spCopy = sp1 = " << spCopy.shortestSpan() << std::endl;
        std::cout << "spCopy = sp1 = " << spCopy.longestSpan() << std::endl;

        std::cout << "spAssignmentCopy2 = sp2 = " << spAssignmentCopy.shortestSpan() << std::endl;
        std::cout << "spAssignmentCopy2 = sp2 =" << spAssignmentCopy.longestSpan() << std::endl;
    }
    return 0;
}