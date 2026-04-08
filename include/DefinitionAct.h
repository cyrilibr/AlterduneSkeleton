#pragma once

#include <string>

class DefinitionAct {
public:
    std::string id;
    std::string texte;
    int impactMercy;

    DefinitionAct();
    DefinitionAct(const std::string& id, const std::string& texte, int impactMercy);
    ~DefinitionAct() = default;
};
