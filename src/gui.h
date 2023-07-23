#ifndef GUI_H
#define GUI_H

#include "game.h"

class Gui
{
private:
    /* data */
public:
    Gui(/* args */);
    ~Gui();

    void loop(const LoopResult result, const Game& game);
    void update_actions(PlayerActions& actions);
};

#endif /* GUI_H */
