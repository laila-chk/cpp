/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:10:14 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/19 00:35:24 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main() 
{
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  return 0; 
}
