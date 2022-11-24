/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/24 11:57:17 by lchokri          ###   ########.fr       */
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

FixedPt::FixedPt(FixedPt& fp) : _val(fp._val)
{
  std::cout << "Default constructor called" <<std::endl;
}

FixedPt FixedPt::operator = (FixedPt& fp)
{
  this->_val = fp._val;
  return (*this);
}

int FixedPt::getRawBits(void) const
{
//  std::bitset<8>b(this->_frac);
  std::cout << this->_val << std::endl;
  std::cout << this->_frac<< std::endl;
  return (2);
}


