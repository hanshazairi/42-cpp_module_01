/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:36 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 18:08:40 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Karen.hpp"

using std::cout;
using std::endl;

int main(void) {
    Karen karen;

    karen.complain("DEBUG");
    cout << endl;
    karen.complain("INFO");
    cout << endl;
    karen.complain("WARNING");
    cout << endl;
    karen.complain("ERROR");

    return 0;
}
