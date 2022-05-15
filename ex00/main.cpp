/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:36:27 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/26 19:36:29 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.h"

int main() {
    ClapTrap test1("Test1");
    ClapTrap test2("Test2");
    test1.beRepaired(5);
    return 0;
}
