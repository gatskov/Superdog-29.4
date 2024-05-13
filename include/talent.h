#pragma once
#include <iostream>

class Talent
{
public:
    virtual void ability() = 0;
};
class Swimming : public Talent
{
    void ability() override
    {
        std::cout << "It can-> 'Swim'\n";
    }
};
class Dancing : public Talent
{
    void ability() override
    {
        std::cout << "It can-> 'Dance'\n";
    }
};

class Counting : public Talent
{
    void ability() override
    {
        std::cout << "It can-> 'Count'\n";
    }
};

class Guide : public Talent
{
    void ability() override
    {
        std::cout << "It can-> 'Guide'\n";
    }
};

class Sniffer : public Talent
{
    void ability() override
    {
        std::cout << "It can-> 'Sniffer'\n";
    }
};

class Hunter : public Talent
{
    void ability() override
    {
        std::cout << "It can-> 'Hunter'\n";
    }
};
