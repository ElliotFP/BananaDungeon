#pragma once

#include <iostream>
#include <string>

class Character
{
protected: // same as private but children can use it
    // variables that belong to a class are called attributes
    int hp, hpMax, str, def, agi;
    bool isAlive;

public:
    Character(int _hp, int _str, int _def, int _agi);
    ~Character();

    // getter behaviours
    int gethp();
    int gethpmax();
    int getstr();
    int getdef();
    int getagi();
    bool getlife();

    // setter behaviours
    void setupStats(int _hp, int _str, int _def, int _agi);
    void takeDamage(int damage);

    void printStats();
};