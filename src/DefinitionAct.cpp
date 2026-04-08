#include "DefinitionAct.h"

DefinitionAct::DefinitionAct() : id(""), texte(""), impactMercy(0) {}

DefinitionAct::DefinitionAct(const std::string& id, const std::string& texte, int impactMercy)
    : id(id), texte(texte), impactMercy(impactMercy) {}
