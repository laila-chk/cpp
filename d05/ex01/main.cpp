/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/13 17:49:34 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  try
  {
    Bureaucrat woman;
    Bureaucrat molchi("molchi", 1);
    Form Bill;

    std::cout << "******************before signing" << std::endl;
    woman.signForm(Bill);
    molchi.signForm(Bill);


    std::cout << "*****************after signing" << std::endl;
    Bill.beSigned(molchi);
     /*callin the below function along woman will throw an exception"*/
   // Bill.beSigned(woman);
    std::cout << "*****************" << std::endl;
    woman.signForm(Bill);
    molchi.signForm(Bill);
  }
  catch (std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }
}
