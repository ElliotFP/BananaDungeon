#include <iostream>
#include <string>
#include "../Headers/Character.h"
#include "../Headers/Monster.h"
#include "../Headers/Communist.h"
#include "../Headers/Hero.h"

Communist::Communist(int _hp, int _str, int _def, int _agi) : Monster(_hp, _str, _def, _agi){};
Communist::~Communist(){};

void Communist::redistribute(Hero Ennemy){};
void Communist::overthrow(Hero Ennemy){};