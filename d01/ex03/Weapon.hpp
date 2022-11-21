/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:28:11 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 13:26:38 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "string"
#include "iostream"

class Weapon
{
  private:
    std::string _type;
  public:
    Weapon(std::string wp);
    ~Weapon();
    std::string getType(void);
    void setType(std::string type);
};

#endif
