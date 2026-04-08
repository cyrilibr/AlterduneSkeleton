#pragma once

#include <map>
#include <string>
#include <vector>

#include "DefinitionAct.h"
#include "EntreeBestiaire.h"
#include "Joueur.h"
#include "Monstre.h"
#include "ResultatCombat.h"

class Jeu {
private:
    Joueur joueur;
    std::vector<Monstre> listeMonstres;
    std::map<std::string, DefinitionAct> catalogueActs;
    std::vector<EntreeBestiaire> bestiaire;

public:
    Jeu();
    ~Jeu() = default;

    bool chargerDonnees();
    void lancer();
    void demarrerCombat();
    ResultatCombat gererCombat();
};
