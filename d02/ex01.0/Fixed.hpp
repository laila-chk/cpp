/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/27 19:33:24 by lchokri          ###   ########.fr       */
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
    /***    Construtors     ***/
    FixedPt();
    FixedPt(const int i);
    FixedPt(const float ft);

    FixedPt(FixedPt& fp); //copy constructor
    FixedPt operator = (const float ft);
    FixedPt operator= (FixedPt& fp);
    ~FixedPt(); //destructor
    /****   Methods     *****/
    int    getRawBits(void) const;
    void   setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;


};


std::ostream& operator<< (std::ostream& os, const FixedPt& obj);


#endif
