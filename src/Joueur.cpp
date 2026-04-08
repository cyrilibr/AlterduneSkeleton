#include "Joueur.h"

#include <iostream>

Joueur::Joueur() : Personnage("Joueur", 100, 10, 5), inventaire(), nbTues(0), nbEpargnes(0), nbVictoires(0) {}

Joueur::Joueur(const std::string& nom, int pvMax, int attaque, int defense)
    : Personnage(nom, pvMax, attaque, defense), inventaire(), nbTues(0), nbEpargnes(0), nbVictoires(0) {}

void Joueur::ajouterKill() {
    ++nbTues;
}

void Joueur::ajouterEpargne() {
    ++nbEpargnes;
}

void Joueur::afficherStatistiques() const {
    std::cout << "--- Statistiques ---\n";
    std::cout << "Victoires: " << nbVictoires << "\n";
    std::cout << "Monstres tues: " << nbTues << "\n";
    std::cout << "Monstres epargnes: " << nbEpargnes << "\n";
}

std::vector<Item>& Joueur::getInventaire() {
    return inventaire;
}

const std::vector<Item>& Joueur::getInventaire() const {
    return inventaire;
}
