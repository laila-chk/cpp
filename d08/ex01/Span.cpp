/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:11:06 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/19 01:16:03 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0)
{
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

void Span::addNumber(int n)
{
  if (vec.size() < _N)
    vec.push_back(n);
  else
    throw (std::exception());
}

int Span::longestSpan()
{
  if (vec.size() > 1)
  {
    std::vector<int> tmp(vec);
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator mx;
    std::vector<int>::iterator mn;

    mx = std::max_element(tmp.begin(), tmp.end());
    mn = std::min_element(tmp.begin(), tmp.end());
  return (*mx-*mn);
  }
  else
    throw (std::exception());
}

int Span::shortestSpan()
{
  if (vec.size() > 1)
  {
    int ret;
    std::vector<int> tmp(vec.size());
    std::copy(vec.begin(), vec.end(), tmp.begin());
    std::sort(tmp.begin(), tmp.end());

    ret = tmp[1] - tmp[0];
    for (unsigned long i = 2; i < tmp.size(); i++)
    {
      if (tmp[i] - tmp[i - 1] < ret)
        ret = tmp[i] - tmp[i - 1];
    }
    return ret ;
  }
  else
    throw (std::exception());
}

template<typename T>
void Span::addRange(T& data, int s, int e)
{
  while(s <= e)
  {
    vec.push_back(data[s++]);
  }
}
