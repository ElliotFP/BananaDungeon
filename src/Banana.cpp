#include <iostream>
#include <string>
#include "../Headers/Character.h"
#include "../Headers/Monster.h"
#include "../Headers/Banana.h"

Banana::Banana(int _hp, int _str, int _def, int _agi) : Monster(_hp, _str, _def, _agi){};
Banana::~Banana(){};

int Banana::slip(int charAgi)
{
    cout << "Banana uses slip, let's see how agile you are." << endl;
    if (charAgi < agi)
    {
        cout << "You have slipped on the banana! You hit your head and were dealt " << str << " damage." << endl;
        return str;
    }
    else
    {
        cout << "You have dodged the banana peel! You are safe... for now." << endl;
        return 0;
    }
};
int Banana::eat()
{
    return def;
};