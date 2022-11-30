/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/30 13:37:02 by lchokri          ###   ########.fr       */
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
    /***    Construtors     ***/
    FixedPt();
    FixedPt(const int i);
    FixedPt(const float ft);

   
    ~FixedPt();

/***************************   Methods     **********************************/
    FixedPt(FixedPt& fp); //copy constructor
    FixedPt& operator= (const FixedPt& fp);

/*************************** comparing Operartors overloading **********************************/

    bool operator!= (const FixedPt& fp);
    bool operator== (const FixedPt& fp);
    bool operator>= (const FixedPt& fp);
    bool operator<= (const FixedPt& fp);
    bool operator< (const FixedPt& fp);
    bool operator> (const FixedPt& fp);

/*************************** Arithmetic Operartors overloading **********************************/
    

    FixedPt operator+ (const FixedPt& fp);
    FixedPt operator- (const FixedPt& fp);
    FixedPt operator* (const FixedPt& fp);
    FixedPt operator/ (const FixedPt& fp);


    FixedPt operator++ (int);
    FixedPt& operator++ ();
    FixedPt operator-- (int);
    FixedPt& operator-- ();


FixedPt& min(FixedPt& one, FixedPt& two);
FixedPt& min(const FixedPt& one, const FixedPt& two);

    int    getRawBits(void) const;
    void   setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;


};


std::ostream& operator<< (std::ostream& os, const FixedPt& obj);


#endif
