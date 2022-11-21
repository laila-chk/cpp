/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:13:57 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 13:27:54 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
  private:
    std::string _name;
    Weapon* _Weap;
  public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon& wp);
    void setWeapon(Weapon *wap);
};

#endif
