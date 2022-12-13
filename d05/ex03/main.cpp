/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/13 01:01:09 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
  try
  {
    Intern  someRandomIntern;
    Form*   rrf;
  
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf = someRandomIntern.makeForm("RobotomyRequesdwaedForm", "Bender");
    rrf->execute(Bureaucrat());
  }
  catch(const char *e)
  {
    std::cout << e <<std::endl;
  }
}
