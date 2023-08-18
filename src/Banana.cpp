#include <iostream>
#include <string>
#include "../Headers/Character.h"
#include "../Headers/Monster.h"
#include "../Headers/Banana.h"

Banana::Banana(int _hp, int _str, int _def, int _agi) : Monster(_hp, _str, _def, _agi){};
Banana::~Banana(){};

void Banana::slip(int charAgi)
{
    if (charAgi < agi)
    {
        cout << "You have slipped on the banana! You hit your head and were dealt " << str << " damage." << endl;
    }
};
int Banana::eat()
{
    return def;
};