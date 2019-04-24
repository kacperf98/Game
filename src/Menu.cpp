#include "Menu.h"
#include "Character.h"
#include <iostream>
#include <string>

// Change 'switch' to 'if' later

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
            << "3. Options\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '1': system("CLS"); newGame(); break;
            case '2': system("CLS"); continueGame(); break;
            case '3': system("CLS"); optionMenu(); break;
            case '0': system("CLS"); exit_game = exitGame(); break;
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

void Menu::newGame() {
    main_menu_open = closeMainMenu();

    std::cout << "Enter name for your champion: ";
    std::string name {};
    std::cin >> name;

    Character champion(name);
    champion.showName();
    std::cout << champion.getAttack() << std::endl;

    // Comment code below later
    while (!exit_game && !main_menu_open) {
        std::cout << "---------------------\n"
            << "Nothing is here yet.\n"
            << "9. Previous\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); mainMenu(); break;
            default: system("CLS"); std::cout << "There is no choice like that.\n";
        }
    }
}

void Menu::continueGame() {
    main_menu_open = closeMainMenu();

    while (!exit_game && !main_menu_open) {
        std::cout << "---------------------\n"
            << "Nothing is here yet.\n"
            << "1. Login\n"
            << "2. Select level\n"
            << "9. Previous\n"
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '1': system("CLS"); std::cout << "Nothing is here yet.\n"; break;
            case '2': system("CLS"); selectLevel(); break;
            case '9': system("CLS"); mainMenu(); break;
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
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); continueGame(); break;
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
            << "---------------------\n";

        std::cout << "Select: ";
        char select {};
        std::cin >> select;

        switch(select) {
            case '9': system("CLS"); mainMenu(); break;
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
