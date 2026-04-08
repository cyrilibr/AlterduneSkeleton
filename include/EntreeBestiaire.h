#pragma once

#include <string>

#include "CategorieMonstre.h"

class EntreeBestiaire {
public:
    std::string nom;
    CategorieMonstre categorie;
    int pvMax;
    int attaque;
    int defense;
    bool epargne;

    EntreeBestiaire();
    EntreeBestiaire(const std::string& nom,
                    CategorieMonstre categorie,
                    int pvMax,
                    int attaque,
                    int defense,
                    bool epargne);
    ~EntreeBestiaire() = default;
};
