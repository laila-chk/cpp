/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:13:57 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/19 13:16:37 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA 
{
  private:
    std::string _name;
    Weapon& _Weapon;
  public:
    HumanA(const std::string& nm, Weapon& wp);
    ~HumanA();
    void attack(void);
};

#endif
