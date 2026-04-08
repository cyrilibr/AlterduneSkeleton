#include "Item.h"

Item::Item() : nom(""), type(TypeItem::SOIN), valeur(0), quantite(0) {}

Item::Item(const std::string& nom, TypeItem type, int valeur, int quantite)
    : nom(nom), type(type), valeur(valeur), quantite(quantite) {}
