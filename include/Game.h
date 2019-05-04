#ifndef _GAME_H_
#define _GAME_H_

#include "Character.h"
#include <string>

class Game
{
public:
    Game();
    void checkLogin();
    void startGame(Character& player, Character& enemy);
    void showInfo(Character& player, Character& enemy);
    void fight(Character& player, Character& enemy);
    void endGame(Character& player, Character& enemy);

private:
    int level;
    std::string login;
    std::string password;
};

#endif // _GAME_H_
