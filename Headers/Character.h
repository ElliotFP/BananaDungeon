#pragma once
class Character
{
private:
    // variables that belong to a class are called attributes
    int hp, hpMax, str, def, agi;

public:
    Character();
    ~Character();

    void setupStats(int _hp, int _str, int _def, int _agi);
    void printStats();
}