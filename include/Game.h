#ifndef _GAME_H_
#define _GAME_H_

#include <string>

class Game
{
public:
    Game();
    void startGame();

private:
    int level;
    std::string login;
    std::string password;
};

#endif // _GAME_H_
