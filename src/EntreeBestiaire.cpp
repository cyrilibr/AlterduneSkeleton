#include "EntreeBestiaire.h"

EntreeBestiaire::EntreeBestiaire()
    : nom(""), categorie(CategorieMonstre::NORMAL), pvMax(0), attaque(0), defense(0), epargne(false) {}

EntreeBestiaire::EntreeBestiaire(const std::string& nom,
                                 CategorieMonstre categorie,
                                 int pvMax,
                                 int attaque,
                                 int defense,
                                 bool epargne)
    : nom(nom), categorie(categorie), pvMax(pvMax), attaque(attaque), defense(defense), epargne(epargne) {}
