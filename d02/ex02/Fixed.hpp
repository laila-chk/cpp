/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/01 12:14:38 by lchokri          ###   ########.fr       */
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

    bool operator!= (const FixedPt& fp) const;
    bool operator== (const FixedPt& fp) const;
    bool operator>= (const FixedPt& fp) const;
    bool operator<= (const FixedPt& fp) const;
    bool operator< (const FixedPt& fp) const;
    bool operator> (const FixedPt& fp) const;

    /*************************** Arithmetic Operartors overloading **********************************/


    FixedPt operator+ (const FixedPt& fp) const;
    FixedPt operator- (const FixedPt& fp) const;
    FixedPt operator* (const FixedPt& fp) const;
    FixedPt operator/ (const FixedPt& fp) const;


    FixedPt operator++ (int);
    FixedPt& operator++ ();
    FixedPt operator-- (int);
    FixedPt& operator-- ();


    FixedPt& min(FixedPt& one, FixedPt& two);
    const FixedPt& min(const FixedPt& one, const FixedPt& two);
    FixedPt& max(FixedPt& one, FixedPt& two);
    const FixedPt& max(const FixedPt& one, const FixedPt& two);

    int    getRawBits(void) const;
    void   setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;


};


std::ostream& operator<< (std::ostream& os, const FixedPt& obj);


#endif
