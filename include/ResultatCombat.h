#pragma once

class ResultatCombat {
public:
    bool joueurGagne;
    bool joueurMort;
    bool monstreEpargne;

    ResultatCombat();
    ResultatCombat(bool joueurGagne, bool joueurMort, bool monstreEpargne);
    ~ResultatCombat() = default;
};
