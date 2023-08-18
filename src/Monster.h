#pragma once

#include <iostream>
#include <string>
#include "../Headers/Character.h"

using namespace std;

// Inherits from Character class
class Monster : public Character
{
public:
    Monster(int _hp, int _str, int _def, int _agi);
    ~Monster();

    int basicAttack(int amount);
    int specialAttack(int amount);
};