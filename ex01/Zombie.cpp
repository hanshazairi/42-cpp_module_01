/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:39:43 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 02:03:40 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(void) : name_("") {}

Zombie::Zombie(string name) : name_(name) {}

Zombie::~Zombie(void) {
    cout << name_ << " died." << endl;
}

void Zombie::set_name(string name) {
    name_ = name;
}

void Zombie::announce(void) const {
    cout << name_ << ": BraiiiiiiinnnzzzZ..." << endl;
}
