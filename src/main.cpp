#include <iostream>
#include <string>
#include "game.h"


int main(int argc, char const *argv[]){

    std::string label;
    std::string player_name;
    std::cout << "Please enter the name of your laundromat \n";
    std::cin >> label;
    std::cout << "Please enter the name of your player \n";
    std::cin >> player_name;
    std::cout << "starting...\n";

    Game game = Game(label);
    game.get_player().name = player_name;


    return 0;
}
