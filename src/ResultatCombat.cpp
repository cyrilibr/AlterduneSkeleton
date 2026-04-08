#include "ResultatCombat.h"

ResultatCombat::ResultatCombat() : joueurGagne(false), joueurMort(false), monstreEpargne(false) {}

ResultatCombat::ResultatCombat(bool joueurGagne, bool joueurMort, bool monstreEpargne)
    : joueurGagne(joueurGagne), joueurMort(joueurMort), monstreEpargne(monstreEpargne) {}
