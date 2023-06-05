#include "Character.h"

#include <iostream>
#include <string>

using namespace std;

Character::Character()
{
}

Character::~Character()
{
}

void Character::setupStats(int _hp, int _str, int _def, int _agi)
{
    hp = _hp;
    hpMax = _hp;
    str = _str;
    def = _def;
    agi = _agi;
}

void Character::printStats()
{
    cout << "HP: " << hp << "/" << hpMax << endl;
    cout << "STR: " << str << endl;
    cout << "DEF: " << def << endl;
    cout << "AGI: " << agi << endl;
}