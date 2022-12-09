/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:51:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/09 10:16:31 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  std::cout << "default constructor for Bureaucrat was called, name and grade";
  std::cout << "weren't passed, initialising them with 'Hamid' and 150"<<std::endl;
  _name = "Hamid";
  _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
  if (grade > 0 && grade <= 150)
    _grade = grade;
  else
    //call exeption..
  
}

Bureaucrat::Bureaucrat()
