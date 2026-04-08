#pragma once

#include <string>

class Personnage {
protected:
    std::string nom;
    int pv;
    int pvMax;
    int attaque;
    int defense;

public:
    Personnage(const std::string& nom, int pvMax, int attaque, int defense);
    virtual ~Personnage() = default;

    bool estVivant() const;
    void soigner(int montant);
    void subirDegats(int degats);

    const std::string& getNom() const;
    int getPv() const;
    int getPvMax() const;
    int getAttaque() const;
    int getDefense() const;
};
