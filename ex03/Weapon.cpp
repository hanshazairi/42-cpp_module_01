/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:28:54 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 02:06:41 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Weapon.hpp"

using std::string;

Weapon::Weapon(string type) : type_(type) {}

string Weapon::getType(void) const {
    return type_;
}

void Weapon::setType(string type) {
    type_ = type;
}
