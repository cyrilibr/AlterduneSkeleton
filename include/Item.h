#pragma once

#include <string>

#include "TypeItem.h"

class Item {
public:
    std::string nom;
    TypeItem type;
    int valeur;
    int quantite;

    Item();
    Item(const std::string& nom, TypeItem type, int valeur, int quantite);
    ~Item() = default;
};
