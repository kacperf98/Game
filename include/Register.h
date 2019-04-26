#ifndef _REGISTER_H_
#define _REGISTER_H_

#include <string>

// Add register form when DB is created

class Register
{
public:
    Register();
    ~Register();
    void registerForm();
private:
    std::string login;
    std::string password;
};

#endif // _REGISTER_H_
