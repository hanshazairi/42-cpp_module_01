/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:39:24 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 02:03:28 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int count = 3;
    Zombie *zombies = zombieHorde(count, "Heaps");

    for (int i = 0; i < count; i++)
        zombies[i].announce();

    delete[] zombies;

    return 0;
}
