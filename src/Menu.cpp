#include "Menu.h"
#include <iostream>

Menu::Menu() {
    exit_game = false;
    main_menu_open = true;
}

void Menu::mainMenu() {
    main_menu_open = !closeMainMenu();

    while (!exit_game && main_menu_open) {
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
    main_menu_open = closeMainMenu();

    while (!exit_game && !main_menu_open) {
        std::cout << "---------------------\n"
            << "Nothing is here yet.\n"
            << "9. Previous\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); mainMenu(); break;
            case '0': system("CLS"); exit_game = exitGame(); break;
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

void Menu::continueGame() {
    main_menu_open = closeMainMenu();

    while (!exit_game && !main_menu_open) {
        std::cout << "---------------------\n"
            << "Nothing is here yet.\n"
            << "9. Previous\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); mainMenu(); break;
            case '0': system("CLS"); exit_game = exitGame(); break;
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

void Menu::selectLevel() {
    main_menu_open = closeMainMenu();

    while (!exit_game && !main_menu_open) {
        std::cout << "---------------------\n"
            << "Nothing is here yet.\n"
            << "9. Previous\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); mainMenu(); break;
            case '0': system("CLS"); exit_game = exitGame(); break;
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

void Menu::optionMenu() {
    main_menu_open = closeMainMenu();

    while (!exit_game && !main_menu_open) {
        std::cout << "---------------------\n"
            << "Nothing is here yet.\n"
            << "9. Previous\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); mainMenu(); break;
            case '0': system("CLS"); exit_game = exitGame(); break;
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

bool Menu::closeMainMenu() {
    return false;
}

bool Menu::exitGame() {
    return true;
}
