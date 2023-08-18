#pragma once
class Character
{
private:
    // variables that belong to a class are called attributes
    int hp, hpMax, str, def, agi;
    bool isAlive;

public:
    Character(int _hp, int _str, int _def, int _agi);
    ~Character();

    // getter functions
    int gethp();
    int getstr();
    int getdef();
    int getagi();
    bool getlife();

    // setter methods
    void setupStats(int _hp, int _str, int _def, int _agi);
    void takeDamage(int damage);

    void printStats();
};