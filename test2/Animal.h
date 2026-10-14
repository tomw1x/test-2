#include "Creature.h"

class Animal : public Creature {
protected:
    std::string species; // вид
    std::string genus;   // рід
    double weight;       // вага

public:
    Animal(const std::string& n, const std::string& sp, const std::string& g, double w);
    virtual ~Animal();

    // Аксесори
    void setSpecies(const std::string& sp);
    std::string getSpecies() const;

    void setGenus(const std::string& g);
    std::string getGenus() const;

    void setWeight(double w);
    double getWeight() const;

    void showInfo() const override;
};