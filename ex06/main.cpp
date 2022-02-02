/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:28:03 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 18:09:00 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Karen.hpp"

using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "./karenFilter <level>" << endl;

        return 1;
    }

    Karen().complain(argv[1]);

    return 0;
}
