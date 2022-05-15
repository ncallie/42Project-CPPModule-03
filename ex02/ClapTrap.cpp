/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:37:11 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/26 19:37:14 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Fighter " << this->name << " entered the arena" << std::endl;
}

ClapTrap::ClapTrap() {
    name = "NoName";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Fighter " << this->name << " entered the arena" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    this->name = other.getName();
    this->hitPoints = other.getHitPoints();
    this->energyPoints = other.getEnergyPoints();
    this->attackDamage = other.getAttackDamage();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    this->name = other.getName();
    this->hitPoints = other.getHitPoints();
    this->energyPoints = other.getEnergyPoints();
    this->attackDamage = other.getAttackDamage();
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Fighter " << this->name << " died" << std::endl;
}

std::string ClapTrap::getName() const {
    return name;
}

int ClapTrap::getHitPoints() const {
    return hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    std::cout << name << " attacks " << target << " ,causing " << attackDamage << " points" << std::endl;
    attackDamage = 0;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->energyPoints || energyPoints == 0) {
        std::cout << name << " You don't have enough energy to charge an attack" << std::endl;
        return;
    } else {
        attackDamage += amount;
        energyPoints -= amount;
        std::cout << name << " - Charges attack for " << amount << " points" << std::endl;
        std::cout << name << " - Attack is equal to " << attackDamage << " points" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount > this->energyPoints || energyPoints == 0) {
        std::cout << name << " You don't have enough energy" << std::endl;
    } else {
        hitPoints += amount;
        energyPoints -= amount;
        std::cout << name << " - Health replenished by " << amount << " points" << std::endl;
        std::cout << name << " - Health " << hitPoints << std::endl;
    }
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
    this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}
