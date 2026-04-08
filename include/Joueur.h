#pragma once

#include <vector>

#include "Item.h"
#include "Personnage.h"

class Joueur : public Personnage {
private:
    std::vector<Item> inventaire;
    int nbTues;
    int nbEpargnes;
    int nbVictoires;

public:
    Joueur();
    Joueur(const std::string& nom, int pvMax, int attaque, int defense);
    ~Joueur() override = default;

    void ajouterKill();
    void ajouterEpargne();
    void afficherStatistiques() const;

    std::vector<Item>& getInventaire();
    const std::vector<Item>& getInventaire() const;
};
