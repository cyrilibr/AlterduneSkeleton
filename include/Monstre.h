#pragma once

#include <string>
#include <vector>

#include "Personnage.h"

class Monstre : public Personnage {
protected:
    int mercy;
    int objectifMercy;
    std::vector<std::string> idsActions;

public:
    Monstre();
    Monstre(const std::string& nom, int pvMax, int attaque, int defense, int objectifMercy);
    ~Monstre() override = default;

    void ajusterMercy(int delta);
    bool peutEtreEpargne() const;

    int getMercy() const;
    int getObjectifMercy() const;
    const std::vector<std::string>& getIdsActions() const;
    std::vector<std::string>& getIdsActions();
};
