/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:37:20 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/26 19:43:03 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) {
    std::cout << "Building the FragTrap" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
}

FragTrap::FragTrap() {
    std::cout << "Building the FragTrap" << std::endl;
    setName("FragTrap");
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap - died" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
    return *this;
}

void FragTrap::attack(std::string target) {
    ClapTrap::attack(target);
    std::cout << "FragTrap - Energy power generation" << std::endl;
    setEnergyPoints(getEnergyPoints() + 10);
    std::cout << "FragTrap - Restored 5 energy points" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << getName() << "request high fives!" << std::endl;
}
