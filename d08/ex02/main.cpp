/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 01:33:08 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/20 01:46:42 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp" 


int main()
{
  std::cout << "- - - - - - - - -*{std::deque iterators}*- - - - - - -  - -  -"<< std::endl;
  {
    std::deque<int> mstack;
    mstack.push_back(22);
    mstack.push_back(17);
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);


    std::deque<int>::iterator it = mstack.begin();
    std::deque<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
  }

  std::cout << "- - - - - - - - -*{MutantStack iterators}*- - - - - - -  - -  -"<< std::endl;
  MutantStack<int> mstack;
  mstack.push(22);
  mstack.push(17);
  mstack.push(3); 
  mstack.push(5);
  mstack.push(737); 


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
  std::cout << "- - - - - - - - -more stack methods:- - - - - - -  - -  -"<< std::endl;

  std::cout << "size(): " << mstack.size() << std::endl;
  std::cout << "bool returned by empty(): " << mstack.empty() << std::endl;
  std::cout << "top(): " << mstack.top() << std::endl;
  std::cout << "calling pop to remove the top element." << std::endl;
  mstack.pop(); 
  std::cout << "top(): " << mstack.top() << std::endl;

  return 0;
}
