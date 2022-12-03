/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/03 17:39:21 by lchokri          ###   ########.fr       */
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

/************************** Comparison Operartors overloading **********************************/

bool FixedPt::operator!= (const FixedPt& fp) const
{ 
  if (this->toFloat() != fp.toFloat())
    return true;
  return false;
}

bool FixedPt::operator== (const FixedPt& fp) const
{ 
  if (this->toFloat() == fp.toFloat())
    return true;
  return false;
}

bool FixedPt::operator <= (const FixedPt& fp) const

{ 
  if (this->toFloat() <= fp.toFloat())
    return true;
  return false;
}

bool FixedPt::operator >= (const FixedPt& fp) const
{ 
  if (this->toFloat() >= fp.toFloat())
    return true;
  return false;
}

bool FixedPt::operator < (const FixedPt& fp) const
{ 
  if (this->toFloat() < fp.toFloat())
    return true;
  return false;
}

bool FixedPt::operator > (const FixedPt& fp) const
{ 
  if (this->toFloat() > fp.toFloat())
    return true;
  return false;
}

/************************** Arithmetic Operartors overloading **********************************/

 FixedPt FixedPt::operator+ (const FixedPt& point)const 
{
  //the reason why we are creating a new floating point and returning it instead of this pointer like we did in 
  //the assigenement operator, is that the result is an individual obj, op= changes the obj on the left, that's why
  //we should change and return this, while here, not the right nor the left obj should be changed

  FixedPt add;
  add._val = this->_val + point._val; 
  return (add);
}

FixedPt FixedPt::operator- (const FixedPt& point)const 
{
  FixedPt sub;
  sub._val = this->_val - point._val; 
  return (sub);
}

FixedPt FixedPt::operator* (const FixedPt& point)const 
{
  FixedPt res;
  res._val = (this->_val * point._val);
  for (int i = 0; i < _frac; i++)
    res._val /= 2;
  return (res);
}


FixedPt FixedPt::operator/ (const FixedPt& point) const
{
  float tmp = point._val;
  FixedPt res;
  for (int i = 0; i < _frac; i++)
    tmp /= 2;
  res._val = (this->_val / tmp);
  return (res);
}

FixedPt FixedPt::operator++ (int)
{
  //this is eq to a.op++(int) which we are returning a new obj
  FixedPt obj = *this;
  this->_val++;
  return (obj);
}

FixedPt& FixedPt::operator++ ()
{
  this->_val++;
  return (*this);
}

FixedPt FixedPt::operator-- (int)
{
  //this is eq to a.op++(int) which we are returning a new obj
  FixedPt obj = *this;
  this->_val--;
  return (obj);
}

FixedPt& FixedPt::operator-- ()
{
  this->_val--;
  return (*this);
}

FixedPt& FixedPt::min(FixedPt& one, FixedPt& two)
{
  if (one < two)
    return (one);
  return (two);
}

FixedPt& FixedPt::max(FixedPt& one, FixedPt& two)
{
  if (one < two)
    return (two);
  return (one);
}

const FixedPt& FixedPt::min(const FixedPt& one, const FixedPt& two)
{
  if (one < two)
    return (one);
  return (two);
}


const FixedPt& FixedPt::max(const FixedPt& one, const FixedPt& two)
{
  if (one < two)
    return (two);
  return (one);
}






















