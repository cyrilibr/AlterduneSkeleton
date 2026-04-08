#include "Monstre.h"

#include <algorithm>

Monstre::Monstre() : Personnage("Monstre", 50, 8, 3), mercy(0), objectifMercy(100), idsActions() {}

Monstre::Monstre(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy)
    : Personnage(nom, pvMax, attaque, defense), mercy(0), objectifMercy(objectifMercy), idsActions() {}

void Monstre::ajusterMercy(int delta) {
    mercy = std::clamp(mercy + delta, 0, 100);
}

bool Monstre::peutEtreEpargne() const {
    return mercy >= objectifMercy;
}

int Monstre::getMercy() const {
    return mercy;
}

int Monstre::getObjectifMercy() const {
    return objectifMercy;
}

const std::vector<std::string>& Monstre::getIdsActions() const {
    return idsActions;
}

std::vector<std::string>& Monstre::getIdsActions() {
    return idsActions;
}
