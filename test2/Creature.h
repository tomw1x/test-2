#pragma once
#include <string>

class Creature {
protected:
    std::string name; // назва

public:
    Creature(const std::string& n);
    virtual ~Creature();

    // Аксесори (мутатори та селектори)
    void setName(const std::string& n);
    std::string getName() const;

    // Віртуальний метод відображення даних
    virtual void showInfo() const;
};