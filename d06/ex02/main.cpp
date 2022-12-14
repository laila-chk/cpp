/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:30:01 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 22:00:06 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
  Base *a1 = new A;
  Base *b1 = new B;
  Base *c1 = new C;
  Base *x = generate();

  identify(a1);
  identify(b1);
  identify(c1);
  identify(x);

  std::cout << "------------------" << std::endl;
  A a;
  A& aa = a;
  identify(aa);

  B b;
  B& bb = b;
  identify(bb);

  C c;
  C& cc = c;
  identify(cc);
}
