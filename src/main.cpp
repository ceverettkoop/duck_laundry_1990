#include <iostream>
#include <string>
#include <ctime>
#include "game.h"
//#include "gui.h"
#include "cli.h"

int main(int argc, char const *argv[]){

    std::string label;
    std::string player_name;
    PlayerActions actions;
    LoopResult result;
    //replace this when GUI when GUI exists
    Cli cli;
    //Gui gui;
    
    rand_seed = std::time(0);
    std::srand(rand_seed);

    std::cout << "Please enter the name of your laundromat \n";
    std::cin >> label;
    std::cout << "Please enter the name of your player \n";
    std::cin >> player_name;
    std::cout << "starting...\n";

    Game game = Game(label);
    game.get_player().name = player_name;

    while(result != QUIT_GAME){
        //gui.loop(result, game);
        cli.loop(result, game);
        //gui.update_actions(actions); 
        cli.update_actions(actions);
        result = game.game_loop(actions);
        //if we ended a turn, for instance, this will loop around and notify gui
    }

    return 0;
}
