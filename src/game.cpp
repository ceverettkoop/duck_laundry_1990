#include "game.h"

void Game::advance_turn() {

    //update national economy
    economy.process_turn();
    //process changes to local economy
    hood.process_turn(economy, mat);
    //process business conducted in new environment
    last_day = hood.process_business(mat);
    //update player based on business
    player.money += last_day.get_net_revenue();

}

Game::Game(std::string label) {
    label = label;
}

//main loop will call repeatedly until this returns 1
//
int Game::game_loop(PlayerActions actions) {

    //all other updates to process

    if(actions.end_turn)
        advance_turn();

    if(actions.quit_game)
        return 1;

    return 0;
}

Player& Game::get_player() {
    return player;
}
