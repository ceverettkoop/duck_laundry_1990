#ifndef GAME_H
#define GAME_H

#include <string>
#include "neighborhood.h"
#include "laundromat.h"
#include "nationaleconomy.h"

class Game{
private:
    std::string label;
    Neighborhood hood;
    Laundromat mat;
    NationalEconomy economy;
    int current_turn;

public:
    Game(std::string label);
    ~Game();

    void advance_turn();

};


#endif /* GAME_H */
