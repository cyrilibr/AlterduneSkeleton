#pragma once

#include "Monstre.h"

class Boss : public Monstre {
public:
    Boss();
    Boss(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy);
    ~Boss() override = default;
};
