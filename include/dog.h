#pragma once
#include "talent.h"

class Dog
{
public:
    std::string nick;

    void ability(Talent *talent)
    {
        talent->ability();
    }
    void show_talents();
    void dogshow(std::string nick, Talent *a, Talent *b, Talent *c, Talent *d, Talent *e);
};
