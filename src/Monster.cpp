#include <iostream>
#include <string>
#include "../Headers/Monster.h"
#include "../Headers/Character.h"

Monster::Monster(int _hp, int _str, int _def, int _agi) : Character(_hp, _str, _def, _agi){};
Monster::~Monster(){};

int Monster::basicAttack(int amount)
{
    return str;
};
int Monster::specialAttack(int amount)
{
    return str * agi;
};