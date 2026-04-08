#include "Jeu.h"

#include <iostream>

Jeu::Jeu() : joueur(), listeMonstres(), catalogueActs(), bestiaire() {}

bool Jeu::chargerDonnees() {
    return true;
}

void Jeu::lancer() {
    if (!chargerDonnees()) {
        std::cerr << "Erreur de chargement des donnees.\n";
        return;
    }

    demarrerCombat();
}

void Jeu::demarrerCombat() {
    ResultatCombat resultat = gererCombat();
    (void)resultat;
}

ResultatCombat Jeu::gererCombat() {
    return ResultatCombat{};
}
