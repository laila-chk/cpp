/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:50:33 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 18:52:54 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"


int main()
{
  Data *d = new Data;
  Data *newd;
  uintptr_t rw;

  int a = 7;
  d->c = 'L'; d->i = 5; d->p = &a;
  std::cout << "before : c = " <<d->c <<"| i = "<< d->i << "| *p = " << *(d->p) <<"| p = " << d->p<<std::endl;

  rw = serialize(d);
  newd = deserialize(rw);

  std::cout << "after: c = " <<newd->c <<"| i = "<< newd->i << "| *p = " << *(newd->p) <<"| p = " << newd->p<<std::endl;
}
