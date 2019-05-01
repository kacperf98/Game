#include "Game.h"
#include "Menu.h"
#include "Character.h"
#include <iostream>
#include <windows.h>

//Test
Game::Game() {
    login = "test";
    password = "test";
}

void Game::checkLogin() {
    system("CLS");

    std::cout << "Enter your login: ";
    std::string check_login;
    std::cin >> check_login;

    std::cout << "Enter your password: ";
    std::string check_password;
    std::cin >> check_password;

    if(check_login == login && check_password == password) {
        std::cout << "Login succeed! Wait 2 seconds!";
        Sleep(2000);
        system("CLS");
        startGame();
    }
    else {
        std::cout << "Wrong login or password! Try again!";
        Sleep(2000);
        system("CLS");
        checkLogin();
    }
}

void Game::startGame() {

}
