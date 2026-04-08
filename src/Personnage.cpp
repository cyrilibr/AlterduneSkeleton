#include "Personnage.h"

#include <algorithm>

Personnage::Personnage(const std::string& nom, int pvMax, int attaque, int defense)
    : nom(nom), pv(pvMax), pvMax(pvMax), attaque(attaque), defense(defense) {}

bool Personnage::estVivant() const {
    return pv > 0;
}

void Personnage::soigner(int montant) {
    pv = std::min(pv + montant, pvMax);
}

void Personnage::subirDegats(int degats) {
    const int degatsReels = std::max(0, degats - defense);
    pv = std::max(0, pv - degatsReels);
}

const std::string& Personnage::getNom() const {
    return nom;
}

int Personnage::getPv() const {
    return pv;
}

int Personnage::getPvMax() const {
    return pvMax;
}

int Personnage::getAttaque() const {
    return attaque;
}

int Personnage::getDefense() const {
    return defense;
}
