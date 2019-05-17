#ifndef _REGISTER_H_
#define _REGISTER_H_

#include "Menu.h"
#include "Character.h"
#include <iostream>
#include <windows.h>
#include <string>
// Add register form when DB is created

class Register
{
public:
    Register();
    void registerForm();
private:
    std::string login;
    std::string password;
};

#endif // _REGISTER_H_
