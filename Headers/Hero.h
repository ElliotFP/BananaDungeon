#pragma once

#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

// Inherits from Character class
class Hero : public Character
{
private:
    string name;

public:
    Hero(int _hp, int _str, int _def, int _agi, string _name);
    ~Hero();

    void setName(string s);
    // replace getName inherited from Character
    string getName();

    void heal(int amount);
    void strboost(int amount);
    void defboost(int amount);
};