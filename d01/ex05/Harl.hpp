/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:47:22 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 21:14:13 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
  private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
  public:
    Harl();
    ~Harl();
    void    complain( std::string level );
};

#endif
