/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:37:24 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/26 19:37:26 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H


#include "ClapTrap.h"

class FragTrap : public ClapTrap {

public:
    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap &operator = (const FragTrap &other);
    void attack(std::string target);
    void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_H
