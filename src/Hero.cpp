#include "../Headers/Hero.h"
#include "../Headers/Character.h"

#include <iostream>
#include <string>

Hero::Hero(int _hp, int _str, int _def, int _agi, string _name) : Character(_hp, _str, _def, _agi)
{
    name = _name;
};

Hero::~Hero(){};

void Hero::setName(string s)
{
    name = s;
};

string Hero::getName()
{
    return name;
};

void Hero::heal(int amount)
{
    hp += amount;
    if (hp > hpMax)
    {
        hp = hpMax;
    }
};
void Hero::strboost(int amount)
{
    str += amount;
};
void Hero::defboost(int amount)
{
    def += amount;
};