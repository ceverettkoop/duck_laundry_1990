#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "laundromat.h"
#include "constants.h"

struct Player{

    std::string name = "DEFAULT DUCK";
    int money = STARTING_MONEY;

    Player();
    Player::Player(std::string in_name, int in_money);
    ~Player();
};

#endif /* PLAYER_H */
