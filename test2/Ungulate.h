#include "Animal.h"

class Ungulate : public Animal {
private:
    std::string habitat; // середовище існування

public:
    Ungulate(const std::string& n, const std::string& sp, const std::string& g, double w, const std::string& h);
    ~Ungulate();

    // Аксесори
    void setHabitat(const std::string& h);
    std::string getHabitat() const;

    void showInfo() const override;
};
