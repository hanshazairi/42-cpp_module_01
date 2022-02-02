/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:14:34 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 16:37:11 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_KAREN_HPP_
#define EX05_KAREN_HPP_

#include <string>

using std::string;

class Karen {
 public:
    void complain(string level) const;

 private:
    struct FuncLookupTable {
        const string key;
        void (Karen::*f)(void) const;
    };

    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;
};

#endif  // EX05_KAREN_HPP_
