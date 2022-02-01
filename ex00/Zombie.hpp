/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:47:17 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/01 22:13:18 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ZOMBIE_HPP_
#define EX00_ZOMBIE_HPP_

#include <string>

using std::string;

class Zombie {
 public:
    explicit    Zombie(string name);
    ~Zombie(void);

    void        announce(void) const;
 private:
    string      name_;
};

/* newZombie.cpp */
Zombie  *newZombie(string name);

/* randomChump.cpp */
void    randomChump(string name);

#endif  // EX00_ZOMBIE_HPP_
