/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/26 19:08:55 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int FixedPt::_frac = 8;
FixedPt::FixedPt ()
{
  _val = 0;
  std::cout << "Default constructor called" <<std::endl;
}

FixedPt::FixedPt (const float num)
{
  float tmp;

  _val = round(num);
  tmp = num - _val ;
  std::cout << "Default constructor called" <<std::endl;
}

FixedPt::~FixedPt ()
{
  std::cout << "Destructor called" <<std::endl;
}

FixedPt::FixedPt(const FixedPt& fp) : _val(fp._val) 
{
  std::cout << "copy constructor called" <<std::endl;
}

FixedPt FixedPt::operator = (const FixedPt& fp)
{
  std::cout << "copy assignement operator called" <<std::endl;
  this->_val = fp._val;
  return (*this);
}

int FixedPt::getRawBits(void) const
{
  return (this->_val);
}

void FixedPt::setRawBits(int const raw) 
{
  this->_val = raw;
}

