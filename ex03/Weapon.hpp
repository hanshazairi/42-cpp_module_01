/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 00:17:35 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 01:04:15 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_WEAPON_HPP_
#define EX03_WEAPON_HPP_

#include <string>

using std::string;

class   Weapon {
 public:
    explicit    Weapon(string type_);

    string      getType(void) const;
    void        setType(string type);

 private:
    string      type_;
};

#endif  // EX03_WEAPON_HPP_
