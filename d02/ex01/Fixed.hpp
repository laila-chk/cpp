/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/26 17:04:37 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class FixedPt
{
  private:
    int _val;
    static const int _frac;
  public:
    FixedPt(const int val);   //def constructor
    FixedPt(const float num);
    FixedPt(FixedPt& fp); //copy constructor
    FixedPt operator= (FixedPt& fp);//copy assignement ob : ClassName operator = (ClassName const &obj) // hadik const hit refrence
    ~FixedPt(); //destructor
    int    getRawBits(void) const;
    void   setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};




#endif
