/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:33:56 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/27 15:45:26 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* to better understand what we should do in this exercice, we should understanf the
 * the struggles we may face, one of them is we only have an integer to store a num
 * in it, that num may be fractional, as we were taught we can simply multiply it by
 * 10^x and store as an int, the bad side of this is that the number may be super huge
 * and there is a chance it will exceed what an int could store, so here where working
 * with bits and binary will come in handy, the second private attribute in out class
 * is said for storing the number of fractional bits, or more clearly: the number/amount
 * of fractional bits we could have in a number ex: 1010101.0011, the fractional here is
 * four but they decided to fix it in 8, so we know we will never exceed it, and we can
 * add zeros to fill the remaining bits and it won't change a thing..
 *
 * it will be easy to work with bit shifting since it works with binary automatically,
 * and shifting a number X<<a is equivalent to doing X * 2^a which is waaaay smaller 
 * than 10^x and do the jobn of getting rid of the point that were fixed on 8*/ 
int main( void ) 
{
    FixedPt a;
    FixedPt const b( 10 );
    FixedPt const c( 42.42f );
    FixedPt const d( b );
    a = FixedPt( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
  }
