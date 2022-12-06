/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/05 12:49:21 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int FixedPt::_frac = 8;
FixedPt::FixedPt ()
{
  _val = 0;
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

FixedPt& FixedPt::operator = (const FixedPt& fp)
{
  std::cout << "copy assignement operator called" <<std::endl;
  this->_val = fp._val;
  return (*this);
}

int FixedPt::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_val);
}

void FixedPt::setRawBits(int const raw) 
{
  this->_val = raw;
}

