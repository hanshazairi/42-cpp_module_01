/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:37:54 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/07 20:29:37 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

using std::string;
using std::to_string;

Zombie *zombieHorde(int N, string name) {
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].set_name(name + "_" + to_string(i));

    return zombies;
}
