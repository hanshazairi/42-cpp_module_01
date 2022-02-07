/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:33:33 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/07 22:08:47 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(string name) : name_(name), weapon_(NULL) {}

void HumanB::setWeapon(const Weapon &weapon) {
    weapon_ = &weapon;
}

void HumanB::attack(void) const {
    if (weapon_)
        cout << name_ << " attacks with their " << weapon_->getType() << endl;
    else
        cout << name_ << " is not equipped with a weapon" << endl;
}
