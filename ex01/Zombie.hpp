/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:35:12 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/01 22:30:34 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ZOMBIE_HPP_
#define EX01_ZOMBIE_HPP_

#include <string>

using std::string;

class Zombie {
 public:
    Zombie(void);
    explicit    Zombie(string name);
    ~Zombie(void);

    void        set_name(string name);
    void        announce(void) const;
 private:
    string      name_;
};

/* ZombieHorde.cpp */
Zombie* zombieHorde(int N, string name);

#endif  // EX01_ZOMBIE_HPP_
