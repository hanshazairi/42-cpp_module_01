/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:25:35 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/08 00:16:44 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANA_HPP_
#define EX03_HUMANA_HPP_

#include <string>

#include "Weapon.hpp"

using std::string;

class HumanA {
 public:
    HumanA(string name, const Weapon &weapon);

    void attack(void) const;

 private:
    string name_;
    const Weapon &weapon_;
};

#endif  // EX03_HUMANA_HPP_
