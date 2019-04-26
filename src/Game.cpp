#include "Game.h"
#include "Menu.h"
#include "Character.h"
#include <iostream>
#include <string>
#include <windows.h>

//Test
Game::Game() {
    login = "test";
    password = "test";
}

void Game::startGame() {
    system("CLS");

    std::cout << "Enter your login: ";
    std::string check_login;
    std::cin >> check_login;

    std::cout << "Enter your password: ";
    std::string check_password;
    std::cin >> check_password;

    if(check_login == login && check_password == password) {
        std::cout << "Your in! Wait 2 seconds!";
        Sleep(2000);
        system("CLS");
    }
    else {
        std::cout << "Wrong login or password! Wait 2 seconds!";
        Sleep(2000);
        system("CLS");
    }
}
