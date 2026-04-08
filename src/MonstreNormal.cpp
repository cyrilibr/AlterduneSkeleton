#include "MonstreNormal.h"

MonstreNormal::MonstreNormal() : Monstre() {}

MonstreNormal::MonstreNormal(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy)
    : Monstre(nom, pvMax, attaque, defense, objectifMercy) {}
