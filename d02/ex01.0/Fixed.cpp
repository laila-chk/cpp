/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/27 19:33:20 by lchokri          ###   ########.fr       */
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
  std::cout <<"this is a test"<<_val;
}

FixedPt::FixedPt (const float ft)
{ 
  // we can;t bitshift in here because we have a float; but since we know that shiftting eq to *2^_frac we can do:
  float tmp = ft;

  for (int i = 0; i < _frac; i++)
    tmp *= 2;
  _val = tmp;
   std::cout << "Default constructor called for a float." <<std::endl;
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

/*
FixedPt FixedPt::operator = (float ft)
{
  std::cout << "assignement operator called" <<std::endl;
  float tmp = ft;

  for (int i = 0; i < _frac; i++)
    tmp *= 2;
  _val = tmp;
  return (*this);
}
*/

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
  float ret =  _val >> _frac ;
  return (ret);
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


