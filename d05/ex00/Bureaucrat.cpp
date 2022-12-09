/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:51:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/09 17:47:12 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Hamid")
{
  std::cout << "default constructor for Bureaucrat was called, name and grade";
  std::cout << "weren't passed, initialising them with 'Hamid' and 150"<<std::endl;
  _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
  if (grade > 0 && grade <= 150)
    _grade = grade;
//  else
  {
    //throw exception..
  }
}

//i still dunno what's the prb in here, we maybe can make two nested classes (seems bad idea but possible)
//one for too big and other for too low grade ..
const char* Bureaucrat::Excep::what () const throw()
{
  if (getGrade() < 1)
   throw "Grade Too High Exception" ; 
}


//Bureaucrat::gradeUp()
