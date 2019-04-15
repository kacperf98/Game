/*
=============
=   TO DO   =
=============
-Add levels
-Add enemies
-Increase amount of enemies when level increase
-Add basic skills to champion1
-More in future...
*/

#include <iostream>
#include "Character.h"
#include <vector>

using namespace std;

int main()
{
    Character champion1;
    //vector<Character> enemy; creating enemies with for

    int test {};
    while (/*champion1.isAlive()*/ test < 1) {
        cout << "---------------------\n"
            << "1. A\n"
            << "2. B\n"
            << "0. Exit\n"
            << "---------------------\n";

        cout << "Select: ";
        int select {};
        cin >> select;

        switch(select) {
            case '1': cout << "A\n"; break;
            case '2': cout << "B\n"; break;
            case '0': return 0; break;
        }
            ++test;
    }
}
