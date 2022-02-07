/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:33:49 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/08 00:16:47 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANB_HPP_
#define EX03_HUMANB_HPP_

#include <string>

#include "Weapon.hpp"

using std::string;

class HumanB {
 public:
    explicit HumanB(string name);

    void setWeapon(const Weapon &weapon);
    void attack(void) const;

 private:
    string name_;
    const Weapon *weapon_;
};

#endif  // EX03_HUMANB_HPP_
