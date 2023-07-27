#ifndef CLI_H
#define CLI_H

#include "game.h"

class Cli
{
private:
    /* data */
public:
    Cli(/* args */);
    ~Cli();
    void loop(const LoopResult result, const Game& game);
    void update_actions(PlayerActions& actions);
};

#endif /* CLI_H */
