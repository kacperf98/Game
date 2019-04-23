/*
=============
=   TO DO   =
=============
-Change everything to class 'Menu' that has these methods declared below
 */
#include "Menu.h"
#include "character.h"
#include <iostream>
#include <cstdlib>

void Menu::mainMenu() {
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
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

void Menu::newGame() {
    std::cout << "Nothing is here yet.\n";
}

void Menu::continueGame() {
    std::cout << "Nothing is here yet.\n";
}

void Menu::selectLevel() {
    std::cout << "Nothing is here yet.\n";
}

void Menu::optionMenu() {
    std::cout << "Nothing is here yet.\n";
}

bool Menu::exitGame() {
    return true;
}
