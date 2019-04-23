#ifndef _MENU_H_
#define _MENU_H_

class Menu {
public:
    Menu();
    void mainMenu();
    bool closeMainMenu();
    void newGame();
    void continueGame();
    void selectLevel();
    void optionMenu();
    bool exitGame();

private:
    bool exit_game;
    bool main_menu_open;
};

#endif // MENU_H_
