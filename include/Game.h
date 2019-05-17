#ifndef _GAME_H_
#define _GAME_H_

#include "Menu.h"
#include "Character.h"
#include <iostream>
#include <windows.h>
#include <string>

class Game
{
public:
    Game();
    //Game(std::string player_login, std::string player_password, int player_level);
    void checkLogin();
    void startGame(Character& player, Character& enemy);
    void showInfo(Character& player, Character& enemy);
    void fight(Character& player, Character& enemy);
    void endGame(Character& player, Character& enemy);

private:
    std::string login;
    std::string password;
    int level; //After creating DB change 'level' to 'wave'
};

#endif // _GAME_H_
