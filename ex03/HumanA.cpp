/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:25:30 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/07 21:50:01 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA(string name, const Weapon &weapon) : name_(name),
        weapon_(weapon) {}

void HumanA::attack(void) const {
    cout << name_ << " attacks with their " << weapon_.getType() << endl;
}
