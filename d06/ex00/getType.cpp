/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:26:22 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 17:26:56 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getType.hpp"

int charType (std::string input)
{
  unsigned int i = 0;
  while (isalpha(input[i]))
    i++;
  if (i == input.size())
    return (1);
  return (-1);
}

int  getType(std::string input)
{
  unsigned int i = 0;

  if (input[i] == '-' || input[i] == '+')
  {
    if (input.size() == 1)
      return (-1);
    i++;
  }
  while (isdigit(input[i]))
    i++;
  if (i == 0)
    return (charType(input));
  if (input[i] == '\0' )
    return (1);
  if (input[i] == '.')
  {
    i++;
    while (isdigit(input[i]))
      i++;
    if(input[i] == 'f')
      return (3);
    if(input[i] == '\0')
      return (2);
  }
  if(!isdigit(input[i]) && input[i] != '.' && i != 0)
    return  (-1);
  return (-2);
}
