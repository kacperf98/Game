#ifndef _MENU_H_
#define _MENU_H_

class Menu {
public:
    Menu();
    void mainMenu();
    void newGame();
    void continueGame();
    void selectLevel();
    void optionMenu();
    bool closeMainMenu();
    bool exitGame();

private:
    bool main_menu_open;
    bool exit_game;
};

#endif // MENU_H_
