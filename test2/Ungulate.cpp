#include "Ungulate.h"
#include <iostream>

Ungulate::Ungulate(const std::string& n, const std::string& sp, const std::string& g, double w, const std::string& h)
    : Animal(n, sp, g, w), habitat(h) {
}

Ungulate::~Ungulate() {}

void Ungulate::setHabitat(const std::string& h) { habitat = h; }
std::string Ungulate::getHabitat() const { return habitat; }

void Ungulate::showInfo() const {
    Animal::showInfo();
    std::cout << "Habitat: " << habitat << std::endl;
}