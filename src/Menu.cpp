/*
=============
=   TO DO   =
=============
-Change everything to class 'Game' that has these methods declared below
 */
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
            case '1': system("CLS"); newGame(); break;
            case '2': system("CLS"); continueGame(); break;
            case '3': system("CLS"); selectLevel(); break;
            case '4': system("CLS"); optionMenu(); break;
            case '0': system("CLS"); exit_game = exitGame(); break;
        }
    }
}

void newGame() {
    std::cout << "Nothing is here yet.\n";
}

void continueGame() {
    std::cout << "Nothing is here yet.\n";
}

void selectLevel() {
    std::cout << "Nothing is here yet.\n";
}

void optionMenu() {
    std::cout << "Nothing is here yet.\n";
}

bool exitGame() {
    return true;
}
