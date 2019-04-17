#include "Menu.h"
#include "character.h"
#include <iostream>
#include <cstdlib>

void mainMenu() {
    bool exit_game = !exitGame();

    while (!exit_game) {
        std::cout << "---------------------\n"
            << "1. New game\n"
            << "2. Continue\n"
            << "3. Select level\n"
            << "4. Options\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '1': /*system("CLS");*/ std::cout << "A\n"; break;
            case '2': std::cout << "A\n"; break;
            case '3': std::cout << "A\n"; break;
            case '4': std::cout << "A\n"; break;
            case '0': exit_game = exitGame(); break;
        }
    }
}

void newGame() {}

void continueGame() {}

void optionMenu() {}

bool exitGame() {
    return true;
}
