#include "game.h"

void Game::advance_turn() {

    //update national economy
    economy.process_turn(cur_turn);
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
LoopResult Game::game_loop(PlayerActions actions) {

    if(cur_turn > NUM_TURNS){
        return GAME_OVER;
    }

    if(actions.end_turn){
        advance_turn();
        cur_turn++;
        return NEW_TURN;
    }
    if(actions.quit_game){
        return QUIT_GAME;
    }

    return NOTHING;
}

Player& Game::get_player() {
    return player;
}
