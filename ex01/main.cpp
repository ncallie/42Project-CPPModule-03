/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:36:56 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/26 19:36:59 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.h"

int main() {
    ScavTrap trap1("Igor");
    trap1.attack("Oleg");
    trap1.guardGate();

    return 0;
}
