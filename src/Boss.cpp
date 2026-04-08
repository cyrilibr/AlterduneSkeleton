#include "Boss.h"

Boss::Boss() : Monstre() {}

Boss::Boss(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy)
    : Monstre(nom, pvMax, attaque, defense, objectifMercy) {}
