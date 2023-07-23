#ifndef GAME_H
#define GAME_H

#include <string>
#include "neighborhood.h"
#include "laundromat.h"
#include "nationaleconomy.h"
#include "player.h"
#include "playeractions.h"

class Game{
private:
    std::string label;
    Neighborhood hood;
    Player player;
    Laundromat mat;
    NationalEconomy economy;
    BusinessDay last_day;
    int current_turn;
    void advance_turn();

public:
    Game(std::string label);
    ~Game();

    int game_loop(PlayerActions actions); //should be called until it returns 1
    Player& get_player();
};


#endif /* GAME_H */
