#ifndef _MENU_H_
#define _MENU_H_

#include "Character.h"
#include "Register.h"
#include "Game.h"
#include <iostream>
#include <string>

class Menu {
public:
    Menu();
    void mainMenu();
    //void newGame();
    void continueGame();
    bool closeMainMenu();
    bool exitGame();

private:
    bool main_menu_open;
    bool exit_game;
};

#endif // _MENU_H_
