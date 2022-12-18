/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:11:06 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/18 19:43:21 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
  throw "object should be constructed using a Number!";
}

Span::Span(unsigned int N): _N(N)
{}

Span::Span(const Span& sp): _N(sp._N)
{
  copy(sp.vec.begin(), sp.vec.end(), this->vec.begin());
}

Span& Span::operator= (const Span& sp)
{
  _N = sp._N;
  copy(sp.vec.begin(), sp.vec.end(), this->vec.begin());
  return (*this);
}

void span::addNumber(int n)
{

}
