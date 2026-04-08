#pragma once

#include "Monstre.h"

class MiniBoss : public Monstre {
public:
    MiniBoss();
    MiniBoss(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy);
    ~MiniBoss() override = default;
};
