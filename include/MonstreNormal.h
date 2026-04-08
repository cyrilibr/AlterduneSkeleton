#pragma once

#include "Monstre.h"

class MonstreNormal : public Monstre {
public:
    MonstreNormal();
    MonstreNormal(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy);
    ~MonstreNormal() override = default;
};
