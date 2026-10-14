#include "Creature.h"
#include <iostream>

Creature::Creature(const std::string& n) : name(n) {}

Creature::~Creature() {}

void Creature::setName(const std::string& n) {
    name = n;
}

std::string Creature::getName() const {
    return name;
}

void Creature::showInfo() const {
    std::cout << "Creature Name: " << name << std::endl;
}