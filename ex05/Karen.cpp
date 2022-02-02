/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:33 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 18:07:14 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Karen.hpp"

using std::cout;
using std::endl;
using std::string;

void Karen::complain(string level) const {
    const FuncLookupTable funcs[4] = {
        { "DEBUG", &Karen::debug },
        { "INFO", &Karen::info },
        { "WARNING", &Karen::warning },
        { "ERROR", &Karen::error }
    };

    for (int i = 0; i < 4; i++) {
        if (level == funcs[i].key) {
            void (Karen::*f)(void) const = funcs[i].f;
            (this->*f)();
            break;
        }
    }
}

void Karen::debug(void) const {
    cout << "[ DEBUG ]" << endl;
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle" \
            "-special-ketchup burger. I really do!" << endl;
}

void Karen::info(void) const {
    cout << "[ INFO ]" << endl;
    cout << "I cannot believe adding extra bacon costs more money. You didn't" \
            " put enough bacon in my burger! If you did, I wouldn't be asking" \
            " for more!" << endl;
}

void Karen::warning(void) const {
    cout << "[ WARNING ]" << endl;
    cout << "I think I deserve to have some extra bacon for free. I've been" \
            " coming for years whereas you started working here since last" \
            " month." << endl;
}

void Karen::error(void) const {
    cout << "[ ERROR ]" << endl;
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}
