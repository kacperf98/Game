#include "Register.h"
#include "Menu.h"
#include "Character.h"
#include <iostream>
#include <windows.h>

Register::Register() {

}

Register::~Register() {

}

void Register::registerForm() {
    system("CLS");

    std::cout << "Enter name for your champion: ";
    std::string name {};
    std::cin >> name;

    std::cout << "Enter login: ";
    std::string form_login {};
    std::cin >> form_login;

    std::cout << "Enter password: ";
    std::string form_password {};
    std::cin >> form_password;

    std::cout << "Enter password again: ";
    std::string form_password2 {};
    std::cin >> form_password2;

    if(form_password == form_password2) {
        std::cout << "Your registration has been successful! Wait 3 seconds!";
        Character champion;
        champion.setName(name);

        login = form_login;
        password = form_password;

        Sleep(3000);
        Menu menu;
        menu.continueGame();
    }
}
