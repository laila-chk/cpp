/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/24 11:55:50 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class FixedPt
{
  private:
    int _val;
    static const int _frac;
  public:
    FixedPt(const int val);   //def constructor
    FixedPt(FixedPt& fp); //copy constructor
    FixedPt operator= (FixedPt& fp);//copy assignement ob : ClassName operator = (ClassName const &obj) // hadik const hit refrence
    ~FixedPt(); //destructor
    int    getRawBits(void) const;
    void   setRawBits(int const raw);
};




#endif
