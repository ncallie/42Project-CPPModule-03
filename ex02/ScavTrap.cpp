/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:37:37 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/26 19:37:39 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) {
    std::cout << "Building the ScavTrap" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap() {
    std::cout << "Building the ScavTrap" << std::endl;
    setName("ScavTrap");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap - died" << std::endl;
}

void ScavTrap::attack(std::string target) {
    ClapTrap::attack(target);
    std::cout << "ScavTrap - Started auto repair" << std::endl;
    setHitPoints(getHitPoints() + 5);
    std::cout << "ScavTrap - Restored 5 hp" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "Gate keeper mode - enable" << std::endl;

}
