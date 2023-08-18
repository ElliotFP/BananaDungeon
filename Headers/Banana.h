#pragma once

#include <iostream>
#include <string>
#include "../Headers/Character.h"
#include "../Headers/Monster.h"

using namespace std;

// Inherits from Character class
class Banana : public Monster
{
public:
    Banana(int _hp, int _str, int _def, int _agi);
    ~Banana();

    void slip(int charAgi);
    int eat();
};