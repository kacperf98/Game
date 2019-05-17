#include "Game.h"

//Constructor for test
Game::Game()
    : login{"test"}, password{"test"}, level{1} {
}

//This constructor probably will be used when DB is created
/*Game::Game(std::string player_login, std::string player_password, int player_level) {

} */

void Game::checkLogin() {
    system("CLS");

    std::cout << "Enter your login: ";
    std::string check_login {};
    std::cin >> check_login;

    std::cout << "Enter your password: ";
    std::string check_password {};
    std::cin >> check_password;

    if(check_login == login && check_password == password) {
        std::cout << "Login succeed! Wait 2 seconds!";
        Sleep(2000);
        system("CLS");
        Character champion {"Champion"};
        Character enemy {"Enemy", 100, 0, 10};

        startGame(champion, enemy);
    }
    else {
        std::cout << "Wrong login or password! Try again!";
        Sleep(2000);
        system("CLS");
        checkLogin();
    }
}

void Game::startGame(Character& player, Character& enemy) {

    do {
        showInfo(player, enemy);
        fight(player, enemy);
        system("CLS");
    } while (player.isAlive() && enemy.isAlive());

    endGame(player, enemy);
}

void Game::showInfo(Character& player, Character& enemy) {
    std::cout << "---------------------\n"
            << "\t" << player.getName() << "\n"
            << "Health: " << player.getHealth() << "\n"
            << "Mana: " << player.getMana() << "\n"
            << "Damage: " << player.getAttack() << "\n"
            << "---------------------\n";

    std::cout << "---------------------\n"
            << "\t" << enemy.getName() << "\n"
            << "Health: " << enemy.getHealth() << "\n"
            << "Mana: " << enemy.getMana() << "\n"
            << "Damage: " << enemy.getAttack() << "\n"
            << "---------------------\n";
}

void Game::fight(Character& player, Character& enemy) {
    std::cout << "---------------------\n"
            << "1. Attack\n"
            << "2. Skill #1 (not prepared yet!)\n"
            << "3. Skill #2 (not prepared yet!)\n"
            << "---------------------\n";

        std::cout << "Select: ";
        int select {};
        std::cin >> select;

        if(select == 1) {
            enemy.setHealthPoints(enemy.getHealth() - player.getAttack());
            player.setHealthPoints(player.getHealth() - enemy.getAttack());
        }
        /*else if(select == 2) {

        }
        else if(select == 3) {

        }*/
        else {
            system("CLS");
            std::cout << "There is no choice like that.\n";
        }
}

void Game::endGame(Character& player, Character& enemy) {
    if(player.isAlive()) {
        std::cout << "Congratulation YOU win!!\n"
                <<"       *   *       \n"
                <<"     *   *   *     \n"
                <<"    *         *    \n"
                <<"     *       *     \n"
                <<"       *   *       \n"
                <<"         *         \n";
    }
    else {
        std::cout << "Unlikely you lost.\n"
                <<"                   \n"
                <<"     ==     ==     \n"
                <<"                   \n"
                <<"       * * *       \n"
                <<"     *       *     \n"
                <<"    *         *    \n";
    }
    Sleep(2000);
    system("CLS");
}
