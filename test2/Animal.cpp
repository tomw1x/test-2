#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& n, const std::string& sp, const std::string& g, double w)
    : Creature(n), species(sp), genus(g), weight(w) {
}

Animal::~Animal() {}

void Animal::setSpecies(const std::string& sp) { species = sp; }
std::string Animal::getSpecies() const { return species; }

void Animal::setGenus(const std::string& g) { genus = g; }
std::string Animal::getGenus() const { return genus; }

void Animal::setWeight(double w) { weight = w; }
double Animal::getWeight() const { return weight; }

void Animal::showInfo() const {
    Creature::showInfo(); // Виклик методу базового класу
    std::cout << "Species: " << species << " | Genus: " << genus
        << " | Weight: " << weight << " kg" << std::endl;
}
