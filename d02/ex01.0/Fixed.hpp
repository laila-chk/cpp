/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:41:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/27 16:19:09 by lchokri          ###   ########.fr       */
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
    FixedPt(const int num);
    FixedPt(const float ft);

    FixedPt(FixedPt& fp); //copy constructor
    FixedPt operator = (const float ft);
   FixedPt operator= (FixedPt& fp);//copy assignement ob : ClassName operator = (ClassName const &obj) // hadik const hit refrence
   friend std::ostream& operator<< (std::ostream& os, const FixedPt& obj);

    ~FixedPt(); //destructor
    /****   Methods     *****/
    int    getRawBits(void) const;
    void   setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;


};




#endif
