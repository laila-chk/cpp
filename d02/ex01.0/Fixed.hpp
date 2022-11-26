/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/26 19:08:52 by lchokri          ###   ########.fr       */
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
    FixedPt();   //def constructor
    FixedPt(const float ft); // constructor overloading
    FixedPt(const FixedPt& fp); //copy constructor
    FixedPt operator = (const FixedPt& fp);//copy assignement ob : ClassName operator = (ClassName const &obj) // hadik const hit refrence
    ~FixedPt(); //destructor
    int    getRawBits(void) const;
    void   setRawBits(int const raw);
};




#endif
