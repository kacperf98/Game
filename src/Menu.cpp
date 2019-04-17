#include "Menu.h"
#include "character.h"
#include <iostream>

void mainMenu() {
    int test {};
    while (test < 5) {
        std::cout << "---------------------\n"
            << "1. A\n"
            << "2. B\n"
            << "0. Exit\n"
            << "---------------------\n";

        std::cout << "Select: ";
        int select {};
        std::cin >> select;

        switch(select) {
            case '1': std::cout << "A\n"; break;
            case '2': std::cout << "B\n"; break;
            case '0': std::cout << "Bye!\n"; break;
        }
            ++test;
    }
}
