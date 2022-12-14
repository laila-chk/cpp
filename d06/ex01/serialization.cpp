/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:54:17 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 18:54:24 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp" 


uintptr_t serialize(Data* ptr)
{
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data*>(raw);
}
