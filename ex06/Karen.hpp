/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:28:14 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/02 18:05:04 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX06_KAREN_HPP_
#define EX06_KAREN_HPP_

#include <string>

using std::string;

class Karen {
 public:
    void complain(string level) const;

 private:
    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;
};

#endif  // EX06_KAREN_HPP_
