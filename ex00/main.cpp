/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:58:05 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/01 22:30:00 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie *heap = newZombie("Heap");
    heap->announce();
    delete heap;

    Zombie stack = Zombie("Stack");
    stack.announce();

    randomChump("Random");

    return 0;
}
