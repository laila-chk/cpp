/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:34:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/26 19:08:49 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int main( void )
{
  FixedPt a; //normal constructor with no params
  FixedPt const b( 10 );  //same constructor as c 
  FixedPt const c( 42.42f );
  FixedPt const d( b ); //copy const
  
  a = FixedPt( 1234.4321f );
  /*
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;
  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  return 0; 
  */



  /****
   * take a val
   * conv to binary------- but we don't know how much nums before the point we have]
   * shift the point
   ******* we also can do
   * take the val
   * shift  ------- but we don't know how much nums before the point we have]
   *

}
