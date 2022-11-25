/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:14:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/25 17:33:39 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
  Harl Harl;

  Harl.complain("DEBUG"); 
  Harl.complain("INFO"); 
  Harl.complain("WARNING");
  Harl.complain("ERROR"); 
}
