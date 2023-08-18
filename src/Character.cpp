#include "../Headers/Character.h"

#include <iostream>
#include <string>

using namespace std;

Character::Character(int _hp, int _str, int _def, int _agi)
{
    hp = _hp;
    hpMax = _hp;
    str = _str;
    def = _def;
    agi = _agi;
    isAlive = true;
};

Character::~Character(){};

// getter functions
int Character::gethp()
{
    return hp;
}

int Character::gethpmax()
{
    return hpMax;
}

int Character::getstr()
{
    return str;
}

int Character::getagi()
{
    return agi;
}

int Character::getdef()
{
    return def;
}

bool Character::getlife()
{
    return isAlive;
}

// setter functions
void Character::setupStats(int _hp, int _str, int _def, int _agi)
{
    hp = _hp;
    hpMax = _hp;
    str = _str;
    def = _def;
    agi = _agi;
};

void Character::takeDamage(int dmg)
{
    int trueDmg = dmg - def;
    if (trueDmg < 1)
    {
        trueDmg = 1;
    }
    hp -= trueDmg;
    if (hp < 1)
    {
        isAlive = false;
        cout << "You have died!" << endl;
    }
}

void Character::printStats()
{
    cout << "HP: " << hp << "/" << hpMax << endl;
    cout << "STR: " << str << endl;
    cout << "DEF: " << def << endl;
    cout << "AGI: " << agi << endl;
};