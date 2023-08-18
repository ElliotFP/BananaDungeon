#pragma once

#include <iostream>
#include <string>
#include "../Headers/Character.h"
#include "../Headers/Hero.h"
#include "../Headers/Monster.h"

using namespace std;

// Inherits from Character class
class Communist : public Monster
{
public:
    Communist(int _hp, int _str, int _def, int _agi);
    ~Communist();

    void redistribute(Hero ennemy);
    void overthrow(Hero ennemy);
};