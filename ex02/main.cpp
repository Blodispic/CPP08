/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozhou <rozhou@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:44:14 by rozhou            #+#    #+#             */
/*   Updated: 2022/04/17 22:44:14 by rozhou           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl  << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << std::endl << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
    //[...]
	lst.push_back(0);
    std::cout << lst.back() << std::endl;
    std::cout << lst.size()  << std::endl  << std::endl;
	std::list<int>::iterator lt = lst.begin();
	std::list<int>::iterator lte = lst.end();
	++lt;
	--lt;
	while (lt != lte)
	{
		std::cout << *lt << std::endl;
		++lt;
	}
	std::list<int> t(lst);
    return 0;
}