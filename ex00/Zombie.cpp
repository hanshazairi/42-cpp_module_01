/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:51:43 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/01 22:14:46 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

Zombie::Zombie(string name) : name_(name) {}

Zombie::~Zombie(void) {
    cout << name_ << " died." << endl;
}

void    Zombie::announce(void) const {
    cout << name_ << ": BraiiiiiiinnnzzzZ..." << endl;
}
