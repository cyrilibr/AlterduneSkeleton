#include "MiniBoss.h"

MiniBoss::MiniBoss() : Monstre() {}

MiniBoss::MiniBoss(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy)
    : Monstre(nom, pvMax, attaque, defense, objectifMercy) {}
