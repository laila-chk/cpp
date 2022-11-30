/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/30 11:30:47 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int FixedPt::_frac = 8;

FixedPt::FixedPt ()
{
  _val = 0;
  std::cout << "Default constructor called" <<std::endl;
}

FixedPt::FixedPt (const int i)
{
  _val = i << _frac;
  std::cout << "Default constructor called for an integer." <<std::endl;
}

FixedPt::FixedPt (const float flt)
{
  float ft = flt;
  std::cout << "Default constructor called for a float." <<std::endl;
  for (int i = 0; i < _frac; i++)
    ft *= 2;
   _val = roundf(ft);
 }

FixedPt::FixedPt(FixedPt& fp) :  _val(fp._val )
{
 
  std::cout << "copy constructor called" <<std::endl;
}

FixedPt& FixedPt::operator = (const FixedPt& fp)
{
  std::cout << "copy assignement operator called" <<std::endl;
  this->_val = fp._val;
  return (*this);
}

std::ostream& operator<< (std::ostream& os, const FixedPt& obj)
{
  os<< obj.toFloat();
  return (os);
}

int FixedPt::getRawBits(void) const
{
  return (this->_val);
}

void FixedPt::setRawBits(int const raw) 
{
  this->_val = raw;
}

float FixedPt::toFloat( void ) const
{
  float ft = _val;

  for (int i = 0; i < _frac; i++)
    ft /= 2;
  return (ft);
}

int FixedPt::toInt( void ) const
{
    int ret = _val >> _frac;
  return (ret);
}

FixedPt::~FixedPt ()
{
  std::cout << "Destructor called" <<std::endl;
}


